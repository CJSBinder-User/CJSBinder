obj = new PRODUCT_NODES_K_TH_LEVEL_TREE_REPRESENTED_STRING();
let param0 =["(0(5(6()())(4()(9()())))(7(1()())(3()())))",
"(8(3(2()())(6(5()())()))(5(10()())(7(13()())())))",
"(0(5(6()())(4()(9()())))(7(1()())(3()())))",
"(8(3(2()())(6(5()())()))(5(10()())(7(13()())())))",
"(8(3(2()())(6(5()())()))(5(10()())(7(13()())())))",
"(8(3(2()())(6(5()())()))(5(10()())(7(13()())())))",
"(0(5(6()())(4()(9()())))(7(1()())(3()())))",
"(0(5(6()())(4()(9()())))(7(1()())(3()())))",
"0010",
"kjtdgmy"];
let param1 =[2,3,1,2,4,100,3,0,12,97];
for(let i = 0; i < param0.length; ++i) {
    print(obj.P_N_K_T_L_T_R_S_f_gold(param0[i],param1[i]))
}
obj.P_N_K_T_L_T_R_S_f_gold(-1, "abc")