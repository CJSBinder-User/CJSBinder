obj = new CHECK_INTEGER_OVERFLOW_MULTIPLICATION();
let param0 =[37,10000000000,10000000000,999999999,39,92,14,19,14,88];
let param1 =[80,-10000000000,10000000000,999999999,36,56,21,38,82,41];
for(let i = 0; i < param0.length; ++i) {
    print(obj.C_I_O_M_f_gold(param0[i],param1[i]))
}
obj.C_I_O_M_f_gold("abc", "abc")