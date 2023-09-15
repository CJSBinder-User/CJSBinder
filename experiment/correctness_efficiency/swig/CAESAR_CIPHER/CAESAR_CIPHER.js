obj = new CAESAR_CIPHER();
let param0 =["LsvbpcviVPwq","35225904","010010","QnYd","2571694","101101011010","jb","928874","11","FbvbkMb"];
let param1 =[15,2,36,44,11,94,22,83,93,37];
for(let i = 0; i < param0.length; ++i) {
    print(obj.C_C_f_gold(param0[i],param1[i]))
}
obj.C_C_f_gold(-1, "abc")