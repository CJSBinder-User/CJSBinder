from pyclang.cindex import Config
from pyclang.cindex import CursorKind
from pyclang.cindex import TranslationUnit
from pyclang.cindex import Index
import os
import ccsyspath
import copy
import time
#Config.set_library_file("clang/lib/libclang.so.12")

def dict_key_list(dic,ke,lis):
    if dic.get(ke) == None:
        dic[ke] = [lis]
    else:
        dic[ke].append(lis)

class CParser:
    def __init__(self,inherit):
        self.index = Index.create()
        
        args    = '-x c++ --std=c++14'.split()
        syspath = ccsyspath.system_include_paths('clang++')
        #print(syspath)
        incargs = [ b'-I' + inc for inc in syspath ]
        self.args = args + incargs
        self.options = TranslationUnit.PARSE_INCOMPLETE
        self.funcdict = {}
        self.classdict = {}
        self.transfunc = {}
        self.inherit = inherit
        self.userinc = []
    def addInclude(self,incstr):
        self.args.append('-I' + incstr)
        self.userinc.append('-I' + incstr)
    def parsePARM_DECL(self,pd):
        parmname = pd.spelling
        partype = pd.type.spelling
        partype = partype.replace("v8::","")
        partype = partype.replace("std::__cxx11::string","string")
        #if partype == "std::string":
            #partype = "string"
        return(parmname,partype)
    def parseFUNCTION_DECL(self,fd):
        funcname = fd.spelling
        restype = fd.result_type.spelling
        restype = restype.replace("v8::","")
        restype = restype.replace("std::__cxx11::string","string")
        arglis = []
        for arg in fd.get_arguments():
            par = self.parsePARM_DECL(arg)
            arglis.append(par)
        fundic = {}
        fundic["static"] = fd.is_static_method()
        fundic["funcname"] = funcname
        fundic["restype"] = restype
        fundic["arg"] = arglis
        return fundic
    def classdesc2transfunc(self,file,classdesc):
        for dic in classdesc["funclist"]:
            funcdic = copy.deepcopy(dic)
            arglis = []
            if funcdic.get("static") != None:
                if not funcdic["static"]:
                    arglis = [('this',classdesc["name"])]
                    funcdic["flag"] = "MD"
                else:
                    funcdic["funcname"] = classdesc["name"] + "::" + funcdic["funcname"]  
                    funcdic["flag"] = "FD"
                del funcdic["static"]             
            arglis.extend(funcdic["arg"])
            funcdic["arg"] = arglis
            dict_key_list(self.transfunc,file,funcdic)
    def classSum(self,file,classdesc):
        if classdesc.get("name") == None:
            return
        if len(classdesc["funclist"]) == 0:
            return
        #if classdesc["name"] == "ObjectWrap":
            #print(classdesc)
        if self.classdict.get(file) == None:
            self.classdict[file] = [classdesc]
        else:
            self.classdict[file].append(classdesc)
    def cursorTraver(self,cursor,file,endline):
        classel = 0
        classdesc = {}
        classdesc["funclist"] = []
        classdesc["fieldlist"] = []
        classdesc["inherit"] = []
        public = False
        inclass = False
        templatefuncflag = False
        templateclassflag = False
        temclasslis = []
        inhertemflag = False
        for node in cursor.walk_preorder():
            if node.location.file is None:
                continue
            #print(node.kind, node.location,node.spelling,node.type.spelling)
            if node.location.file.name != file:
                continue
            if endline != -1 and node.location.line > endline:
                break 
            #print(node.kind, node.location,node.spelling,node.type.spelling)
            if inclass == True and node.location.line >= classel:
                #if classdesc["name"] == "ObjectWrap":
                    #print(classdesc)
                self.classSum(file,classdesc)
                classdesc = {}
                classdesc["funclist"] = []
                classdesc["fieldlist"] = []
                classdesc["inherit"] = []
                #print("inclass = False")
                #print(node.spelling)
                inclass = False
                public = False
            if node.kind == CursorKind.TEMPLATE_REF:
                #print(dir(node))
                if inhertemflag:
                    inhertemflag = False
                    classdesc["inherit"].append((node.get_definition(),temargname))
                    temargname = ""
                #print()
            elif node.kind == CursorKind.CXX_BASE_SPECIFIER:
                print(node.spelling)
                tpn = node.type.get_declaration()
                temargnum = node.type.get_num_template_arguments()
                temargname = ""
                if temargnum == 1:
                    temargname = node.type.get_template_argument_type(0).spelling
                    inhertemflag = True
                elif temargnum == -1:
                    classdesc["inherit"].append((tpn,temargname))
            elif node.kind == CursorKind.CXX_ACCESS_SPEC_DECL:
                #print(dir(node))
                if node.access_specifier.name == "PUBLIC":
                    public = True
                else:
                    public = False
            elif node.kind == CursorKind.FIELD_DECL:
                if public == False:
                    continue
                field = (node.spelling,node.type.spelling)
                dict_key_list(classdesc,"fieldlist",field)
            elif node.kind == CursorKind.CXX_METHOD:
                #print(dir(node))
                if public == False:
                    continue
                funcdic = self.parseFUNCTION_DECL(node)
                dict_key_list(classdesc,"funclist",funcdic)
            elif node.kind == CursorKind.CLASS_DECL:
                #print(dir(node))
                #print(node.from_location)
                if not inclass:
                    #print("inclass = True")
                    #print(node.spelling)
                    classdesc["name"] = node.spelling
                    classel = node.extent.end.line
                    inclass = True
            elif node.kind == CursorKind.CLASS_TEMPLATE:
                #print(node.from_location)
                if not self.inherit:
                    continue
                if not inclass:
                    #print("inclass = True")
                    #print(node.spelling)
                    classdesc["name"] = node.spelling
                    classel = node.extent.end.line
                    inclass = True
                    templateclassflag = True
            elif node.kind == CursorKind.CONSTRUCTOR:
                #print(dir(node))
                #print(node.location)
                funcdic = self.parseFUNCTION_DECL(node)
                dict_key_list(classdesc,"constructor",funcdic)
                funcdic["restype"] = funcdic["funcname"]
                funcdic["flag"] = "CONS"
                dict_key_list(self.transfunc,file,funcdic)
                #print(node.get_arguments())
            elif node.kind == CursorKind.FUNCTION_DECL:
                fundic = self.parseFUNCTION_DECL(node)
                fundic["flag"] = "FD"
                dict_key_list(self.funcdict,file,fundic)
                dict_key_list(self.transfunc,file,fundic)
            elif node.kind == CursorKind.TEMPLATE_TYPE_PARAMETER:
                if not self.inherit:
                    continue
                if templatefuncflag:
                    templatefuncflag = False
                    templatefundic["template"] = node.spelling
                    if public: 
                        templatefundic["flag"] = "MD"
                        dict_key_list(classdesc,"funclist",templatefundic)
                    elif not inclass:
                        templatefundic["flag"] = "FD"
                        dict_key_list(self.funcdict,file,templatefundic)
                        dict_key_list(self.transfunc,file,templatefundic)
                    
                elif templateclassflag:
                    classdesc["template"] = node.spelling
                    templateclassflag = False
            elif node.kind == CursorKind.FUNCTION_TEMPLATE:
                #print(node.spelling)
                templatefundic = self.parseFUNCTION_DECL(node)
                templatefuncflag = True
                #print(fundic)
            elif node.kind == CursorKind.TEMPLATE_NON_TYPE_PARAMETER:
                templatefuncflag = False
                templateclassflag = False

        self.classSum(file,classdesc)
    def inherMethod(self,file):
        if self.inherit:
            self.inherit = False
            for classdesc in self.classdict[file]:
                for inhtype in classdesc["inherit"]:
                    tempclassdict = self.classdict 
                    self.classdict = {} 
                    mototypecursor = inhtype[0]
                    insttype = inhtype[1]
                    motofile = mototypecursor.location.file.name
                    self.cursorTraver(mototypecursor,motofile,mototypecursor.extent.end.line)
                    inhertclassdict = self.classdict[motofile][0]
                    if insttype != "":
                        templatename = inhertclassdict["template"]
                        inhertclassdict["name"] = inhertclassdict["name"] + "<" + insttype + ">" 
                        for func in inhertclassdict["funclist"]:
                            func["restype"] = func["restype"].replace(templatename,insttype)
                            newarglist = []
                            for ar in func["arg"]:
                                newarglist.append((ar[0],ar[1].replace(templatename,insttype))) #arg[1]=argtype
                            func["arg"] = newarglist
                    for funcdic in inhertclassdict["funclist"]:
                        if funcdic["static"]:
                            funcdic["funcname"] = inhertclassdict["name"] + "::" + funcdic["funcname"]
                            funcdic["flag"] = "FD"
                            del funcdic["static"]
                    #print(inhertclassdict)
                    classdesc["funclist"].extend(inhertclassdict["funclist"])
                    #print("inherit class:")
                    #print(self.classdict)
                    self.classdict = tempclassdict
        for fi,classes in self.classdict.items():
            for classdesc in classes:
                self.classdesc2transfunc(fi,classdesc)
    def parseFromAST(self,file):
        tu = TranslationUnit.from_ast_file(file + ".gch")
        file = os.path.abspath(file)
        self.cursorTraver(tu.cursor,file,-1)
        #print(self.classdict)
        self.inherMethod(file)
        #print(self.classdict)
        #print(self.transfunc)
    def parseSingle(self,file):
        index = Index.create()
        tu = index.parse(file, args=self.args, options=self.options)
        self.cursorTraver(tu.cursor,file,-1)
        #self.inherMethod(file)
        #print(self.classdict)
        #print(self.funcdict)
        #print(self.transfunc)
if __name__ == "__main__":
    c = CParser(1)
    
    c.parseSingle("input/node/MessagePort.h")
    


