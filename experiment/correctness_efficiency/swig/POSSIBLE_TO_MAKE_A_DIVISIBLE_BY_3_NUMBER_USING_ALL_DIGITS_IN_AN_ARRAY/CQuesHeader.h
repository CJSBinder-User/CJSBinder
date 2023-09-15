#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class POSSIBLE_TO_MAKE_A_DIVISIBLE_BY_3_NUMBER_USING_ALL_DIGITS_IN_AN_ARRAY {
public:
    bool P_T_M_A_D_B_3_N_U_A_D_I_A_A_f_gold(int arr [], int n)
    { 
        int remainder = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) remainder = ( remainder + arr [ i ] ) % 3 ; 
        return ( remainder == 0 ) ; 
    } 
POSSIBLE_TO_MAKE_A_DIVISIBLE_BY_3_NUMBER_USING_ALL_DIGITS_IN_AN_ARRAY() {}
};