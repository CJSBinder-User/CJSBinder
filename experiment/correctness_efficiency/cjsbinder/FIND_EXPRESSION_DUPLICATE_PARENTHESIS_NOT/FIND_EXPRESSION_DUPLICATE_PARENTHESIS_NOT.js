obj = new FIND_EXPRESSION_DUPLICATE_PARENTHESIS_NOT();
let param0 = [
    "((a+b)+((c+d)))",
    "(((a+(b)))+(c+d))",
    "(((a+(b))+c+d))",
    "((a+b)+(c+d))",
    "(8582007)",
    "((a+(b))+(c+d))",
    "(PylsShEdKAE)",
    "886980680541",
    "001",
    "jsVmFeOq"];
for(let i = 0; i < param0.length; ++i) {
    print(obj.F_E_D_P_N_f_gold(param0[i]))
}
obj.F_E_D_P_N_f_gold(-1)