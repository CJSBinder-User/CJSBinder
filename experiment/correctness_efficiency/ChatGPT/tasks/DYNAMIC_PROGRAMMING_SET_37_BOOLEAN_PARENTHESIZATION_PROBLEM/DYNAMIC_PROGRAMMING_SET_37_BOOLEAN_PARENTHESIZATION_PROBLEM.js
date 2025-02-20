obj = new DYNAMIC_PROGRAMMING_SET_37_BOOLEAN_PARENTHESIZATION_PROBLEM();
let param0 =[["T","T","F","T"],
["T","F","T"],
["T","F","F"],
["T","T","F","T"],
["T","T","F","T"],
["T","T","F","T"],
["T","T","F","T"],
["T","T","F","T"],
["T","T","F","T"],
["T","T","F","T"]];
let param1 =[["|","&","^"],
["^","&"],
["^","|"],
["|","|","|"],
["&","&","&"],
["&","&","^"],
["^","&","|"],
["^","^","^"],
["^","|","|"],
["|","^","|"]];
let param2 =[4,3,3,4,4,4,4,4,4,4];
for(let i = 0; i < param0.length; ++i) {
    print(obj.D_P_S_3_B_P_P_f_gold(param0[i],param1[i],param2[i]))
}
obj.D_P_S_3_B_P_P_f_gold(-1, -1, "abc")