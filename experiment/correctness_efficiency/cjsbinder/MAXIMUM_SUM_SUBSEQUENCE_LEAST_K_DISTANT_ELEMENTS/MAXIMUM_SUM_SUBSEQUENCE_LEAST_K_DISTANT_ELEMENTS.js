obj = new MAXIMUM_SUM_SUBSEQUENCE_LEAST_K_DISTANT_ELEMENTS();
let param0 =[[3,5,20,21,23,26,27,31,33,38,39,41,48,48,50,51,56,57,64,68,69,70,71,74,76,86,97],[32,34,-40,90,-82,-70,30,26,-76,-46,-84,76,-76],[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],[96,15,30,25,83],[-90,-82,-80,-76,-62,-58,-50,-48,-46,-38,-38,-38,-38,-38,-34,-32,-24,-22,-16,-16,-4,-2,10,10,20,26,26,32,38,38,44,44,46,48,58,62,64,66,76,78,78,82,92,96,96,98],[1,1,1,1,1,0,0,0,0,1,1,1,0,1,0,0,1,0,0],[1,2,9,17,24,31,31,33,56,57,61,71,73,74,76,77,79,83,86,95,99],[-12,52,-44,80,-66,34,42,-46,8,12,-22,-56,74,-98,-44,2,-24,-14,-54,-56,-26,-18,-72],[0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1],[65,1,34,38,15,6,55,21,32,90,39,25,43,48,64,66,88,70,82,75,25,56,23,27,41,33,33,55,60,90,41,58,42,53,38,90,7,15]];
let param1 =[23,9,22,2,27,9,12,13,13,37];
let param2 =[15,10,34,3,30,9,10,19,13,33];
for(let i = 0; i < param0.length; ++i) {
    print(obj.M_S_S_L_K_D_E_f_gold(param0[i],param1[i],param2[i]))
}
obj.M_S_S_L_K_D_E_f_gold("abc", "abc", "abc")