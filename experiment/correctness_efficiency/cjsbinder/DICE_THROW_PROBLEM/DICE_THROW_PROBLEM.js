obj = new DICE_THROW_PROBLEM();
let param0 =[94,7,20,90,50,32,46,82,43,6];
let param1 =[4,12,44,94,58,90,25,50,82,83];
let param2 =[69,33,24,88,27,29,6,87,70,19];
for(let i = 0; i < param0.length; ++i) {
    print(obj.D_T_P_f_gold(param0[i],param1[i],param2[i]))
}
obj.D_T_P_f_gold("abc", "abc", "abc")