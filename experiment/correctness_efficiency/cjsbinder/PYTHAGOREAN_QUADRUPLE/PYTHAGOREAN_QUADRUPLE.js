obj = new PYTHAGOREAN_QUADRUPLE();
let param0 =[1,3,0,-1,82,14,6,13,96,70];
let param1 =[2,2,0,-1,79,57,96,7,65,33];
let param2 =[2,5,0,-1,6,35,45,3,72,6];
let param3 =[3,38,0,1,59,29,75,63,93,2];
for(let i = 0; i < param0.length; ++i) {
    print(obj.P_Q_f_gold(param0[i],param1[i],param2[i],param3[i]))
}
obj.P_Q_f_gold("abc", "abc", "abc", "abc")