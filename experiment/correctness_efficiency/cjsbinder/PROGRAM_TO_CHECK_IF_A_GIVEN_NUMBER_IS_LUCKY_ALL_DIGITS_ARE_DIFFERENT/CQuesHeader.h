#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_TO_CHECK_IF_A_GIVEN_NUMBER_IS_LUCKY_ALL_DIGITS_ARE_DIFFERENT {
public:
    bool P_T_C_I_A_G_N_I_L_A_D_A_D_f_gold(int n)
    { 
        bool arr [ 10 ] ; 
        for ( int i = 0 ; 
        i < 10 ; 
        i ++ ) arr [ i ] = false ; 
        while ( n > 0 ) { 
            int digit = n % 10 ; 
            if ( arr [ digit ] ) return false ; 
            arr [ digit ] = true ; 
            n = n / 10 ; 
        } 
        return true ; 
    } 
PROGRAM_TO_CHECK_IF_A_GIVEN_NUMBER_IS_LUCKY_ALL_DIGITS_ARE_DIFFERENT() {}
};