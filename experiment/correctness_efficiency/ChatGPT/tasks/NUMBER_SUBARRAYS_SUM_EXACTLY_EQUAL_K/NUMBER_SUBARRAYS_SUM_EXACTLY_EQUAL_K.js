obj = new NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K();
let param0 =[[9,18,27,52,70,91],[60,-88,-48,90,-28,20,18,34,-58,76,-78,-18,68,-48,8,34,60,-34,-10,32,78,-84,-22,54,-18,-82,-70,-58,-20,-76,88,-30,-6,68],[0,0,0,0,0,0,0,0,1,1,1,1],[67,39,22,32,59,44,86,26,46,60,99,12,32,46,16,22,45,85,21,92,77,50,65,23,93,26,23,20,32,83,60,22,11,45,99,31,72],[-86,-84,-82,-82,-28,-12,4,24,62,72],[1,0,0,1,0,1,1,1,0,1,1,1,0,0,1,1,1,1],[8,20,25,27,28,28,30,31,32,36,39,41,51,53,53,54,56,58,59,77,78,85,88,92,99],[60,40,-96,-76,-34,-18,38,-62,50,56,64,-94,-50,50,-80,42,-66,-42,68,70,78,-18,-24,-48,-92,64,14,24,-94,-98,18,44,-58],[0,0,0,0,1,1,1,1,1,1,1,1],[73,52,37,80,4,26,3,76,32,79,31,32,8,87,42,50,51]];
let param1 =[5,32,11,25,7,16,13,22,11,8];
let param2 =[4,30,11,25,5,13,18,17,8,14];
for(let i = 0; i < param0.length; ++i) {
    print(obj.N_S_S_E_E_K_f_gold(param0[i],param1[i],param2[i]))
}
obj.N_S_S_E_E_K_f_gold("abc", "abc", "abc")