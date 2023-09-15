obj = new PROGRAM_CHECK_ISBN();
let param0 =["007462542X","0112112425","0545010225","0552527408","424519151311","101011","9780552527408","2290344397","1473226406","DDdguSGiRr"];
for(let i = 0; i < param0.length; ++i) {
    print(obj.P_C_I_f_gold(param0[i]))
}
obj.P_C_I_f_gold(-1)