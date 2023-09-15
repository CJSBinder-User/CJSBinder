obj = new FIND_HARMONIC_MEAN_USING_ARITHMETIC_MEAN_GEOMETRIC_MEAN();
let param0 =[54,42,63,19,41,7,39,11,96,15];
let param1 =[83,56,12,76,50,26,42,64,81,54];
for(let i = 0; i < param0.length; ++i) {
    print(obj.F_H_M_U_A_M_G_M_f_gold(param0[i],param1[i]))
}
obj.F_H_M_U_A_M_G_M_f_gold("abc", "abc")