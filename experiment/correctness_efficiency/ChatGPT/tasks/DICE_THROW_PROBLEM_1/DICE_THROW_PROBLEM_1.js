obj = new DICE_THROW_PROBLEM_1();
let param0 =[57,58,38,5,91,76,38,97,97,99];
let param1 =[5,45,89,39,90,56,43,26,90,2];
let param2 =[33,4,9,30,47,46,84,52,90,26];
for(let i = 0; i < param0.length; ++i) {
    print(obj.D_T_P_1_f_gold(param0[i],param1[i],param2[i]))
}
obj.D_T_P_1_f_gold("abc", "abc", "abc")