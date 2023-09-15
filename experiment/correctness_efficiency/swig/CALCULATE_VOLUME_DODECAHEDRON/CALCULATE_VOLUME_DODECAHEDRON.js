obj = new CALCULATE_VOLUME_DODECAHEDRON();
let param0 =[56,73,22,10,84,20,51,91,10,83];
for(let i = 0; i < param0.length; ++i) {
    print(obj.C_V_D_f_gold(param0[i]))
}
obj.C_V_D_f_gold("abc")