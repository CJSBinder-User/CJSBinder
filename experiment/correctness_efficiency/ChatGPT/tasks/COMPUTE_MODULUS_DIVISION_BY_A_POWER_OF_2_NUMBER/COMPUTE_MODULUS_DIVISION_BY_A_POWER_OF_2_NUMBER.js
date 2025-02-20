obj = new COMPUTE_MODULUS_DIVISION_BY_A_POWER_OF_2_NUMBER();
let param0 =[54,39,35,9,62,16,93,32,39,63];
let param1 =[59,84,81,60,68,16,96,38,62,16];
for(let i = 0; i < param0.length; ++i) {
    print(obj.C_M_D_B_A_P_O_2_N_f_gold(param0[i],param1[i]))
}
obj.C_M_D_B_A_P_O_2_N_f_gold([1,2,3], [1,2,3])