obj = new MULTIPLY_LARGE_INTEGERS_UNDER_LARGE_MODULO();
let param0 =[60,46,4,67,93,89,8,53,96,38];
let param1 =[24,43,50,1,35,97,78,73,92,64];
let param2 =[58,29,71,66,73,8,55,22,83,83];
for(let i = 0; i < param0.length; ++i) {
    print(obj.M_L_I_U_L_M_f_gold(param0[i],param1[i],param2[i]))
}
obj.M_L_I_U_L_M_f_gold("abc", "abc", "abc")