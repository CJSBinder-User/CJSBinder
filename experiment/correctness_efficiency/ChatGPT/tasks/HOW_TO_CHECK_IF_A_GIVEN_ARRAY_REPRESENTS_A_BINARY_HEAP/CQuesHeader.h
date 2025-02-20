#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class HOW_TO_CHECK_IF_A_GIVEN_ARRAY_REPRESENTS_A_BINARY_HEAP {
public:
    bool H_T_C_I_A_G_A_R_A_B_H_f_gold(int arr [], int i, int n)
    { 
        if ( i > ( n - 2 ) / 2 ) return true ; 
        if ( arr [ i ] >= arr [ 2 * i + 1 ] && arr [ i ] >= arr [ 2 * i + 2 ] && H_T_C_I_A_G_A_R_A_B_H_f_gold ( arr , 2 * i + 1 , n ) && H_T_C_I_A_G_A_R_A_B_H_f_gold ( arr , 2 * i + 2 , n ) ) return true ; 
        return false ; 
    } 
HOW_TO_CHECK_IF_A_GIVEN_ARRAY_REPRESENTS_A_BINARY_HEAP() {}
};