obj = new RECURSIVE_PROGRAM_PRIME_NUMBER();
let param0 =[3,7,89,97,41,73,95,69,20,30];
let param1 =[2,2,2,2,2,2,2,2,2,2];
for(let i = 0; i < param0.length; ++i) {
    print(obj.R_P_P_N_f_gold(param0[i],param1[i]))
}
obj.R_P_P_N_f_gold("abc", "abc")