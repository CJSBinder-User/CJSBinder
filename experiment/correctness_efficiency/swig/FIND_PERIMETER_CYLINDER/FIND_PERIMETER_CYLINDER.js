obj = new FIND_PERIMETER_CYLINDER();
let param0 =[70,97,49,56,87,64,75,90,55,73];
let param1 =[78,46,26,61,79,21,93,16,16,29];
for(let i = 0; i < param0.length; ++i) {
    print(obj.F_P_C_f_gold(param0[i],param1[i]))
}
obj.F_P_C_f_gold("abc", "abc")