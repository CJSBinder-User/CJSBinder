obj = new MINIMUM_NUMBER_SUBSETS_DISTINCT_ELEMENTS();
let param0 =[[1,2,5,8,16,21,21,22,23,26,26,27,27,29,31,33,36,37,37,38,42,45,47,50,57,58,60,60,62,63,66,66,76,84,84,88,96,99],[-30,-60,34,4,86,80,-96,-94,52,46,8,82,-94,-96,78,82,-22,-36,78,50,-46,-36,80,24,-14,94,-46,-38,82,4,-24,2,4,-82,-82,-18,-62,12,8,92,70,-10],[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],[38,47,84,49,48,62,48,41,38,48,92,16,99],[-88,-64,-40,-38,-38,-16,16,20,28,40,56,58,60,68,74,92],[1,1,0,1,0,0,1,0,1,0,0,1,1,0,1,0,1,1,1,1,0,0,0,1,0,1,0,0,1,0,0,0,1,0,0,0,0,0,1,1,1,1,1],[14,24,82,87,95],[-34,62,40,-84,52,-76,2,-58,94,22,2,-18,-88,62,-14,46,50,-58,-80,68,-64,90,-58,12,76,-40,40,-46,8,-80,4,-90,14,-10,64,-68],[0,1,1,1],[43,41,90,5,6,17,68,68,86,89]];
let param1 =[25,35,34,6,12,29,3,34,3,7];
for(let i = 0; i < param0.length; ++i) {
    print(obj.M_N_S_D_E_f_gold(param0[i],param1[i]))
}
obj.M_N_S_D_E_f_gold("abc", "abc")