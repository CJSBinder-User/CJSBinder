obj = new PRIMALITY_TEST_SET_5USING_LUCAS_LEHMER_SERIES();
let param0 =[11,27,31,47,3,14,41,72,39,22];
for(let i = 0; i < param0.length; ++i) {
    print(obj.P_T_S_5_L_L_S_f_gold(param0[i]))
}
obj.P_T_S_5_L_L_S_f_gold("abc")