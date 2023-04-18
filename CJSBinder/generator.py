import json
import re
from Parser import CParser
import copy
import os
import getopt
import sys
import time
def getBeginBlankNum(line):
    blanknum = 0
    for ele in line:
        if ele == '\t':
            blanknum += 4
        elif ele == ' ':
            blanknum += 1
        else:
            break
    return blanknum
class Context:
    pass
class V8Json:

    IntermediateVarDict = {}
    ConstVarDict = {}
    ApiDict = {}
    RoutineDict = {}
    context = Context()
    InterVarTempSet = set()
    InterVarAddCode = "'InterVarAdd"
    InterVarZeroCode = "'InterVarZero"
    def __init__(self,fn):
        with open(fn,'r') as load_f:
            self.Userdict = json.load(load_f)
        vn = self.findModule("VariableName")["content"]
        for ele in vn:
            if ele["kind"] == "ConstVar":
                self.ConstVarDict = ele
            elif ele["kind"] == "IntermediateVar":
                self.IntermediateVarDict = ele
        #for key in self.IntermediateVarDict["dictionary"].keys():
            #self.IntermediateVarDict["dictionary"][key] = (key,0)
            #print(key,value)
        self.ApiDict = self.findModule("Api")
        self.RoutineDict = self.findModule("Routine")
    def findModule(self,name):
        for ele in self.Userdict:
            if ele["modulename"] == name:
                return ele
    def subConstName(self,matched):
        value = matched.group('value')
        id = value[2:]
        res = self.ConstVarDict["dictionary"][id]
        return res
    def subIntermediateName(self,matched):
        value = matched.group('value')
        id = value[2:]
        self.InterVarTempSet.add(id)
        index = 0
        if self.IntermediateVarDict.get(id) == None:
            self.IntermediateVarDict[id] = 0
            index = 0
        else:
            index = self.IntermediateVarDict[id]
        id = id + str(index)
        #res = self.ConstVarDict["dictionary"][id]
        return id
    def subContext(self,matched):
        value = matched.group('value')
        id = value[2:]
        res = eval("self.context."+id)
        return res
    def subRoutine(self,matched):
        value = matched.group('value')
        routname = re.search(r"'@[a-zA-Z][a-zA-Z0-9]*",value)
        routname = routname.group(0)[2:]
        paralist = re.search(r"'\([\s\S]*'\)",value).group(0)
        paralist = paralist[2:-2]
        paralist = paralist.split(",")
        for ele in self.RoutineDict["content"]:
            if ele["routinename"] == routname:
                roudict = ele
                break
        arglist = roudict["argument"]
        ans = ""
        patlen = len(roudict["pattern"])
        for index in range(0,patlen):
            line = roudict["pattern"][index]
            for i in range(0,len(arglist)):
                line = re.sub(arglist[i],paralist[i],line)
            ans = ans + line
            if index < patlen - 1:
                ans = ans + os.linesep
        #print(ans)
        return ans
    def subApi(self,matched):
        value = matched.group('value')
        #print(line)
        apiname = re.search(r"'\*[a-zA-Z][a-zA-Z0-9]*",value)
        apiname = apiname.group(0)[2:]
        paralist = re.search(r"'\(.*'\)",value).group(0)
        paralist = paralist[2:-2]
        cnt = 0
        newstr = ""
        for i in range(0,len(paralist)):
            if paralist[i] == "<":
                cnt += 1
            elif paralist[i] == ">":
                cnt -= 1
            if cnt > 0 and paralist[i] == ",":
                newstr += '@'
            else:
                newstr += paralist[i]
        paralist = newstr
        paralist = paralist.split(",")
        for i in range(0,len(paralist)):
            paralist[i] = paralist[i].replace("@",",")
        for ele in self.ApiDict["content"]:
            if ele["setname"] == apiname: 
                apidict = ele
                break
        arglist = apidict["argument"]
        for i in range(0,len(arglist)):
            if arglist[i] == "'#type":
                if paralist[i] == "void":
                    return ""
                self.context.type = paralist[i]
        for ele in apidict["element"]:
            if ele["type"] == self.context.type:
                apidict = ele
                break
        ans = ""
        #print(self.context.type)
        #print(apidict)
        for index in range(0,len(apidict["pattern"])):
            line = apidict["pattern"][index]
            for i in range(0,len(arglist)):
                line = re.sub(arglist[i],paralist[i],line)
            ans = ans + line
            if index != len(apidict["pattern"]) - 1:
                ans = ans + os.linesep
        #print("api"+ans)
        return ans
    def interMediateNameAddIndex(self):
        #newv = self.IntermediateVarDict["dictionary"][key][1] + 1
        #self.IntermediateVarDict["dictionary"][key] = (key,newv)
        for ele in self.InterVarTempSet:
            self.IntermediateVarDict[ele] += 1
        self.InterVarTempSet.clear()
    def interMediateNameIndexClear(self,st):
        if self.IntermediateVarDict.get(st) != None:
            del(self.IntermediateVarDict[st])
    def parseConstName(self,line):
        res = re.sub(r"(?P<value>'\%[a-zA-Z][a-zA-Z0-9]*)", self.subConstName, line)
        return res
        #print(res)
    def findIntermediateName(self,line):
        st = re.findall(r"(?P<value>'&[a-zA-Z][a-zA-Z0-9]*)",line)
        return st
    def parseIntermediateName(self,line):
        res = re.sub(r"(?P<value>'&[a-zA-Z][a-zA-Z0-9]*)", self.subIntermediateName, line)
        return res
        #print(res)
    
    def parseRoutine(self,line):
        res = re.sub(r"(?P<value>'@[a-zA-Z][a-zA-Z0-9]*'\([\s\S]*'\))", self.subRoutine, line)
        return res.split(os.linesep)
    def parseApi(self,line):
        #self.context.type = "Int
        res = re.sub(r"(?P<value>'\*[a-zA-Z][a-zA-Z0-9]*'\(.*'\))", self.subApi, line)
        return res.split(os.linesep)
    def parseContext(self,line):
        #self.context.cfuncname = "test"
        res = re.sub(r"(?P<value>'\$[a-zA-Z][a-zA-Z0-9]*)", self.subContext, line)
        #print(res)
        return res
    def parseCodeList(self,codelist):
        clafterrout = []
        clafterapi = []
        finalcl = []
        #bgtime = time.process_time()
        for (line,tab) in codelist:
            oriline = line
            lines = self.parseRoutine(line)
            if lines[0] == oriline:
                clafterrout.append((oriline,tab))
                continue
            for line in lines:
                blnum = getBeginBlankNum(line)
                line = line.strip()
                clafterrout.append((line,tab + blnum))
                
        for (line,tab) in clafterrout:
            oriline = line
            lines = self.parseApi(line)
            if lines[0] == oriline:
                clafterapi.append((oriline,tab))
                continue
            for line in lines:
                blnum = getBeginBlankNum(line)
                line = line.strip()
                clafterapi.append((line,tab + blnum))

        for (line,tab) in clafterapi:
            if line == self.InterVarAddCode:
                self.interMediateNameAddIndex()
                continue
            elif line == self.InterVarZeroCode:
                self.IntermediateVarDict.clear()
                self.InterVarTempSet.clear()
                continue
            line = self.parseConstName(line)
            line = self.parseIntermediateName(line)
            finalcl.append((line,tab))
        #edtime = time.process_time()
        #cost = (edtime-bgtime)*1000
        #print("interpretation cost:%fms"%(cost))
        return finalcl
    
class CodeList:
    tab = 0
    lis = []
    def getLength(self):
        cnt = 0
        se = ["'InterVarZero","'InterVarAdd","{","}"]
        for line in self.lis:
            if line[0] not in se:
                cnt += 1
        return cnt
    def extend(self,li):
        for ele in li:
            self.append(ele)
    def append(self,st):
        #st = st.split('\n')
        #for ele in st:
        bnum = getBeginBlankNum(st)
        st = st.strip()
        self.lis.append((st,self.tab + bnum))
    def removeLast(self):
        self.lis = self.lis[:-1]
    def result(self):
        return self.lis
class V8Glue:

    def __init__(self,jsonfn,hfn):
        self.cl = CodeList()
        self.funccostdic = {}
        self.v8json = V8Json(jsonfn)
        self.cparser = CParser(0)
        self.starttime = time.process_time()
        self.cparser.parseSingle(hfn)
        self.fakeheaderparsetime = time.process_time()
        print("fake header parse time:%fms" % ((self.fakeheaderparsetime-self.starttime)*1000))
        self.funcdict = self.cparser.funcdict
        self.classdict = self.cparser.classdict
        self.patternlist = self.v8json.findModule("Pattern")["content"]
        self.initTSJS2CENV()
    def initTSJS2CENV(self):
        apicontent = self.v8json.findModule("Api")["content"]
        for apis in apicontent:
            if apis["setname"] == "Js2CValueConvert":
                self.js2cconvlist = apis["element"]
        self.js2cinittypes = [("Init","Local<Value>",[])]
        for api in self.js2cconvlist:
            self.js2cinittypes.append(("Api",api["type"],[]))
        for sp in self.findPattern("FUNCPROXY")["js2cspecialtype"]:
            self.js2cinittypes.append(("Spe",sp["type"],sp["name"]))
        #print(self.js2cinittypes)
        self.TSFile = ""
        self.TSInc = []
        self.transfunclist = []
    def getJS2CSpecialTypeName(self,splist,typename):
        for sp in splist:
            if sp["type"] == typename:
                return sp
        return None
    def checkJS2CAPI(self,typename):
        for api in self.js2cconvlist:
            if typename == api["type"]:
                return True
        return False
    def readHeaders(self,hfn):
        hflist = []
        with open(hfn,"r",encoding='UTF-8') as f:
            for line in f.readlines():
                line = line.strip()
                hflist.append(line)
        return hflist
    def test(self,str):
        self.v8json.parseConstName("aaa")
    def findPattern(self,name):
        #print(self.patternlist)
        for ele in self.patternlist:
            #print(ele)
            if ele["patname"] == name:
                return ele["pattern"]
        return None
    def pattern2Code(self,pat):
        for line in pat:
            if line == "'ENTERSCOPE":
                self.enterScope()
            elif line == "'EXITSCOPE":
                self.exitScope()
            else :
                self.cl.append(line)
        temp = self.cl.tab
        self.cl.tab = 0
        self.cl.append(self.v8json.InterVarAddCode)
        self.cl.tab = temp
    def enterScope(self):
        self.cl.append("{")
        self.tsvarid = 1
        self.tsresid = 1
        self.tsobjid = 1
        self.cl.tab += 4
    def exitScope(self):
        self.cl.tab -= 4
        self.cl.append("}")
        temp = self.cl.tab
        self.cl.tab = 0
        self.cl.append(self.v8json.InterVarZeroCode)
        self.cl.tab = temp
    def funcGlueGene(self):
        self.cl.append("/*function glue*/")
        context = Context()
        pat = self.findPattern("FUNCGLUE")
        for (hfilename,funcs) in self.funcdict.items():
            for func in funcs:
                respat = []
                context.cfuncname = func["funcname"]
                context.crestype = func["restype"]
                self.v8json.context = context
                for line in pat:
                    line = self.v8json.parseContext(line)
                    respat.append(line)
                self.pattern2Code(respat)
                self.cl.append("")
        self.cl.removeLast()
    def pattern2CodeParseContext(self,pat):
        respat = []
        for i in range(0,len(pat)):
            respat.append(self.v8json.parseContext(pat[i]))
        self.pattern2Code(respat)
    def proxyConstructorGenerator(self,pt,constdict,context):
        sttime = time.process_time()
        initleng = self.cl.getLength()
        self.v8json.context = context
        self.pattern2CodeParseContext([pt["funcsignature"]])
        self.enterScope()
        self.pattern2CodeParseContext(pt["context"])
        proxyarglist = self.funArgGenerator(pt,context,constdict)
        objname = pt["calling"]["cptrname"]
        objname = self.v8json.parseContext(objname)
        funcname = constdict["funcname"]
        proxycode =  funcname + "* " + objname + " = new " + funcname + "("
        proxycode = self.callGenerator(proxycode,proxyarglist)
        self.cl.append(proxycode)
        self.pattern2CodeParseContext(pt["content"])
        self.exitScope()
        edtime = time.process_time()
        #self.funccostdic[funcname] = (edtime-sttime)*1000
        self.constcost = (edtime-sttime)*1000
        #print("constructor const:%fms" % ((edtime-sttime)*1000))
    def getJSArgLength(self,pt,func):
        count = 0
        argnum = len(func["arg"])
        for i in range(0,argnum):
            tp = func["arg"][i][1]
            spec = self.getJS2CSpecialTypeName(pt["js2cspecialtype"],tp)
            if spec == None:
               count += 1
        return count
            
    def funArgGenerator(self,pt,context,func):
        proxypt = pt["calling"]
        userargname = proxypt["argname"]
        userargname = self.v8json.parseContext(userargname)
        proxyarglist = []
        argnum = len(func["arg"])
        js2ccontext = context
        jsargindex = 0
        specdic = {}
        for i in range(0,argnum):
            js2ccontext.cargtype = func["arg"][i][1]
            spec = self.getJS2CSpecialTypeName(pt["js2cspecialtype"],js2ccontext.cargtype)
            if spec != None:
                #print(spec)
                self.pattern2CodeParseContext(spec["context"])
                specdic[spec["type"]] = spec["name"]
        for i in range(0,argnum):
            js2ccontext.cargindex = str(jsargindex)
            js2ccontext.cargname = func["arg"][i][0]
            js2ccontext.cargtype = func["arg"][i][1]
            if specdic.get(js2ccontext.cargtype) != None:
                specialname = specdic[js2ccontext.cargtype]
                proxyarglist.append(self.v8json.parseContext(specialname))
                continue
            if self.checkJS2CAPI(js2ccontext.cargtype) == False:
                proxyarglist.append("")
                continue
            self.v8json.context = js2ccontext
            self.pattern2CodeParseContext(pt["js2c"])
            proxyarglist.append(self.v8json.parseIntermediateName(self.v8json.parseContext(userargname)))
            self.v8json.interMediateNameAddIndex()
            jsargindex += 1
        self.v8json.context = context
        imnamelist = self.v8json.findIntermediateName(userargname)
        for name in imnamelist:
            name = name[2:]
            self.v8json.interMediateNameIndexClear(name)
        return proxyarglist
    def callGenerator(self,proxycode,proxyarglist):
        if len(proxyarglist) == 0:
            proxycode = proxycode + ");"
        else:
            for index in range(0,len(proxyarglist)):
                if index != len(proxyarglist) - 1:
                    proxycode = proxycode + proxyarglist[index] + "," 
                else:
                    proxycode = proxycode + proxyarglist[index] + ");"
        return proxycode
    def callProxyGenerator(self,proxypt,context,proxyarglist):
        userresname = proxypt["resname"]
        userresname = self.v8json.parseContext(userresname)
        if context.crestype == "void":
            if proxypt.get("cptrname") == None:
                proxycode = context.cfuncname + "("
            else:
                cptr = self.v8json.parseContext(proxypt["cptrname"]) + "->"
                if proxypt.get("proxy") != "":
                    if proxypt["proxy"] == "*":
                        cptr = cptr[:len(cptr)-2]
                        cptr = "(*" + cptr + ")->"
                    else:
                        cptr = cptr + self.v8json.parseContext(proxypt["proxy"])
                proxycode = cptr + context.cfuncname + "("
        else:
            if proxypt.get("cptrname") == None:
                proxycode = context.crestype + " " + userresname + " = " + context.cfuncname + "("
            else:
                cptr = self.v8json.parseContext(proxypt["cptrname"]) + "->"
                if proxypt.get("proxy") != "":
                    if proxypt["proxy"] == "*":
                        cptr = cptr[:len(cptr)-2]
                        cptr = "(*" + cptr + ")->"
                    else:
                        cptr = cptr + self.v8json.parseContext(proxypt["proxy"])
                proxycode = context.crestype + " " + userresname + " = " + cptr + context.cfuncname + "("
        return proxycode
    def proxyFuncGenerator(self,pt,funcs,context):
        for func in funcs:
            sttime = time.process_time()
            initleng = self.cl.getLength()
            funcname = func["funcname"]
            context.cfuncname = func["funcname"]
            context.crestype = func["restype"]
            self.v8json.context = context

            self.pattern2CodeParseContext([pt["funcsignature"]])
            self.enterScope()
            self.pattern2CodeParseContext(pt["context"])

            proxyarglist = self.funArgGenerator(pt,context,func)
            proxycode = self.callProxyGenerator(pt["calling"],context,proxyarglist)
            proxycode = self.callGenerator(proxycode,proxyarglist)
            self.cl.append(proxycode)
            self.v8json.context = context
            if context.crestype != "void":
                self.pattern2CodeParseContext(pt["c2js"])
            else:
                if pt.get("voidhandle") != None:
                    self.pattern2CodeParseContext(pt["voidhandle"])
            self.exitScope()
            endlength = self.cl.getLength()
            edtime = time.process_time()
            self.funccostdic[funcname] = (edtime-sttime)*1000
    def proxyFuncGene(self):
        pt = self.findPattern("FUNCPROXY")
        for (hfilename,funcs) in self.funcdict.items():
            self.proxyFuncGenerator(pt,funcs,Context())
    def findClassPat(self,classpt,st):
        for pt in classpt:
            if pt["name"] == st:
                return pt
        return {}
    def classProxyGeneratorAuxi(self,pt):
        self.pattern2CodeParseContext([pt["funcsignature"]])
        self.enterScope()
        self.pattern2CodeParseContext(pt["content"])
        self.exitScope()
    def proxyInherit(self,pt):
        if len(pt["js2c"]) == 0:
            pt["js2c"] = self.findPattern("FUNCPROXY")["js2c"]
        if pt.get("c2js") != None:
            if len(pt["c2js"]) == 0:
                pt["c2js"] = self.findPattern("FUNCPROXY")["c2js"]
        if len(pt["js2cspecialtype"]) == 0:
            pt["js2cspecialtype"] = self.findPattern("FUNCPROXY")["js2cspecialtype"]
    def proxyClassGene(self):
        pt = self.findPattern("CLASSPROXY")
        constructorpt = self.findClassPat(pt,"CONSTRUCTOR")
        proxyclassfuncpt = self.findClassPat(pt,"CLASSFUNCPROXY")
        self.proxyInherit(proxyclassfuncpt)
        self.proxyInherit(constructorpt)
        for (hfilename,classes) in self.classdict.items():
            for clas in classes:
                ct = Context()
                ct.cclassname = clas["name"]
                if clas.get("constructor") != None:
                    #print(clas)
                    #print(clas)
                    ct.cconsarg = clas["constructor"]
                    ct.jsarglength = str(self.getJSArgLength(constructorpt,clas["constructor"][0]))
                    self.v8json.context = ct
                    #if ct.cconsarg != "noarg":
                        #continue
                    #self.classProxyGeneratorAuxi(constructorpt)
                    self.proxyConstructorGenerator(constructorpt,clas["constructor"][0],ct)
                funclist = clas["funclist"]
                self.proxyFuncGenerator(proxyclassfuncpt,funclist,ct)
    def classGlueGene(self):
        #self.cl.append("/*class glue*/")
        pat = self.findPattern("CLASSGLUE")
        bept = pat["begin"]
        fcpt = pat["funcglue"]
        #fiept = pat["fieldglue"]
        edpt = pat["end"]
        for (hfilename,classes) in self.classdict.items():
            for clas in classes:
                ct = Context()
                bgtime = time.process_time()  
                ct.cclassname = clas["name"]
                self.v8json.context = ct
                cttemp = ct
                self.pattern2CodeParseContext(bept)
                edtime = time.process_time()
                t0 = (edtime-bgtime) * 1000
                for func in clas["funclist"]:
                    bgtime = time.process_time()
                    ct.cfuncname = func["funcname"]
                    self.v8json.context = ct
                    self.pattern2CodeParseContext(fcpt)
                    edtime = time.process_time()
                    self.funccostdic[ct.cfuncname] = self.funccostdic[ct.cfuncname] + (edtime-bgtime)*1000
                self.v8json.context = cttemp
                bgtime = time.process_time()
                self.pattern2CodeParseContext(edpt)
                edtime = time.process_time()
                t1 = (edtime-bgtime)*1000

                if clas.get("constructor") != None:
                    print("constructor cost:%fms" % (self.constcost+t0+t1))
                for (name,cost) in self.funccostdic.items():
                    print("%s cost:%fms" % (name,cost+t0+t1))

                self.cl.append("")
                
        self.cl.removeLast()
    def userInclude(self):
        for headf in self.hflist:
            self.cl.append("#include \""+headf+"\"")
    def registerGene(self):
        #self.enterScope()
        self.pattern2Code(self.findPattern("GLUECONTEXTINIT"))
        self.classGlueGene()
        self.pattern2Code(self.findPattern("GLUECONTEXTEND"))
        #self.exitScope()
    def codeGene(self):
        #self.userInclude()
        #self.cl.extend(self.findPattern("GLOBALCONTEXT"))
        #self.proxyFuncGene()
        self.proxyClassGene()
        #self.cl.append("int main()")
        self.registerGene()
        #print(self.debug)
        #print(self.cl.lis)
        #writeCode("gluemoto.cpp",self.cl.lis)
        totallength = self.cl.getLength()
        cl =  self.v8json.parseCodeList(self.cl.lis)
        return cl
def writeCode(fn,lis):
    with open(fn,"w",encoding='UTF-8') as f:
        for line,tab in lis:
            for i in range(0,tab):
                f.write(' ')
            f.write(line+os.linesep)
def _parse_option():
    try:
        opts, args = getopt.getopt(sys.argv[1:], "P:H:o:", ["pattern=", "headfile=", "output="])
    except getopt.GetoptError:
        print("parameter format error")
        sys.exit(2)
    options_dict = {}
    for opt, arg in opts:
        if opt in ("-P", "--pattern"):
            options_dict["patternfile"] = arg
        elif opt in ("-H", "--headfile"):
            options_dict["headfile"] = arg
        elif opt in ("-o", "--output"):
            options_dict["output"] = arg
    return options_dict
if __name__ == "__main__":   
    optdict = _parse_option()
    v8 = V8Glue(optdict["patternfile"],optdict["headfile"])
    code = v8.codeGene()
    writeCode(optdict["output"],code)
    endtime = time.process_time()
    totaltime = endtime - v8.starttime
    print("total cost:%fms" % (totaltime*1000))
