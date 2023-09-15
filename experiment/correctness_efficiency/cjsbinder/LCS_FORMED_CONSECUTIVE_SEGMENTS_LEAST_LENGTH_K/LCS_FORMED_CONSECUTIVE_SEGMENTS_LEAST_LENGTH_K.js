obj = new LCS_FORMED_CONSECUTIVE_SEGMENTS_LEAST_LENGTH_K();
let param0 =[4,2,3,5,2,3,3,1,2,2];
let param1 =["aggayxysdfa","55571659965107","01011011100","aggasdfa","5710246551","0100010","aabcaaaa","1219","111000011","wiCoD"];
let param2 =["aggajxaaasdfa","390286654154","0000110001000","aggajasdfaxy","79032504084062","10100000","baaabcd","3337119582","011","csiuGOUwE"];
for(let i = 0; i < param0.length; ++i) {
    print(obj.L_F_C_S_L_L_K_f_gold(param0[i],param1[i],param2[i]))
}
obj.L_F_C_S_L_L_K_f_gold("abc", -1, -1)