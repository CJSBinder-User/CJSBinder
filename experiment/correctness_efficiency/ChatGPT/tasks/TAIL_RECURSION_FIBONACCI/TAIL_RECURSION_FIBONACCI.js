obj = new TAIL_RECURSION_FIBONACCI();
let param0 =[4,60,92,73,58,82,53,57,47,83];
let param1 =[43,48,21,79,38,26,10,37,91,3];
let param2 =[24,98,69,38,30,12,17,26,99,64];
for(let i = 0; i < param0.length; ++i) {
    print(obj.T_R_F_f_gold(param0[i],param1[i],param2[i]))
}
obj.T_R_F_f_gold("abc", "abc", "abc")