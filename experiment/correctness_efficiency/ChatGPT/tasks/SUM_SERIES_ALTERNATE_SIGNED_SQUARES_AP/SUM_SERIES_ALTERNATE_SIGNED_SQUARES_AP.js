obj = new SUM_SERIES_ALTERNATE_SIGNED_SQUARES_AP();
let param0 =[11,9,9,5,10,13,3,0,6,5];
let param1 =[[4,4,5,11,13,14,19,20,25,25,26,33,34,37,43,44,44,45,47,48,50,50,60,61,64,65,71,73,79,80,83,85,87,90,95,96,98],[-16,-38,-68,52,-92,76,94,-28,62,-26,38,-14,66,80,-70,52,-84,64,80,-36],[0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1],[11,35,61,21,61,26,27,93,95,77,5,33,94,67],[-96,-90,-64,-60,-52,-50,-42,-36,-30,-16,-8,-8,-4,18,20,22,24,34,52,54,58,64,74,78,80,86,88,96],[0,0,1,0,1,1,1,1,1,0,1,0,0,0,0,1,1,1,0,1,0,0,1,0,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,1,0],[4,28,35,42,44,58,64,69,72,76,90],[-44,-34],[0,0,0,0,0,0,0,1,1,1,1,1,1,1],[83,48,93,25,25,35,39,34,98,80,22,14,48,64,77,87,56,27,33,15,81]];
for(let i = 0; i < param0.length; ++i) {
    print(obj.S_S_A_S_S_A_f_gold(param0[i],param1[i]))
}
obj.S_S_A_S_S_A_f_gold("abc", "abc")
