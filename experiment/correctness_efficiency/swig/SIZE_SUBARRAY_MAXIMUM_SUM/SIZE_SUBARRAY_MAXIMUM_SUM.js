obj = new SIZE_SUBARRAY_MAXIMUM_SUM();
let param0 =[[7,7,16,20,21,22,34,34,37,37,49,53,54,55,58,59,60,66,67,68,73,80,80,88,90,98,99,99],[-90,-98,-10,-84,24],[0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1],[94,2,83,94,10,94,58,99,60,19,3,71,36,84,71,14,50,15],[-98,-96,-70,-64,-56,-38,-34,-24,-22,-2,26,32,36,50,62,70,70,72,72,74,78,82,84,86],[0,1,0,1,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,1,0,1,0,1,0],[1,2,2,5,13,14,15,18,21,34,42,48,50,63,67,68,69,75,80,80,81,83,84,89,90,90,91,92,95,98],[-88,-10,-88,-90,92,14,68,-90,-86],[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],[28,39,90,39,12,90,24,89,54,44,3,26,44,36,67,92,3,79,10,45,22,21,39,91,2,5,72,21,55,48,75,47]];
let param1 =[21,2,19,14,13,35,22,5,24,27];
for(let i = 0; i < param0.length; ++i) {
    print(obj.S_S_M_S_f_gold(param0[i],param1[i]))
}
obj.S_S_M_S_f_gold("abc", "abc")