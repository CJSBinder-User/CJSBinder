#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_IF_ALL_THE_ELEMENTS_CAN_BE_MADE_OF_SAME_PARITY_BY_INVERTING_ADJACENT_ELEMENTS {
public:
    bool C_I_A_T_E_C_B_M_O_S_P_B_I_A_E_f_gold(int a [], int n)
    { 
        int count_odd = 0 , count_even = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( a [ i ] & 1 ) count_odd ++ ; 
            else count_even ++ ; 
        } 
        if ( count_odd % 2 && count_even % 2 ) return false ; 
        else return true ; 
    } 
CHECK_IF_ALL_THE_ELEMENTS_CAN_BE_MADE_OF_SAME_PARITY_BY_INVERTING_ADJACENT_ELEMENTS() {}
};