obj = new PERFECT_REVERSIBLE_STRING();
let param0 =["ab","303","11110000","aba","404","10101","abab","6366","001",""];
for(let i = 0; i < param0.length; ++i) {
    print(obj.P_R_S_f_gold(param0[i]))
}
obj.P_R_S_f_gold(-1)