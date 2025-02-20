#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class WRITE_AN_EFFICIENT_METHOD_TO_CHECK_IF_A_NUMBER_IS_MULTIPLE_OF_3 {
public:
    int W_A_E_M_T_C_I_A_N_I_M_O_3_f_gold(int n)
    { 
        int odd_count = 0 ; 
        int even_count = 0 ; 
        if ( n < 0 ) n = - n ; 
        if ( n == 0 ) return 1 ; 
        if ( n == 1 ) return 0 ; 
        while ( n ) { 
            if ( n & 1 ) odd_count ++ ; 
            if ( n & 2 ) even_count ++ ; 
            n = n >> 2 ; 
        } 
        return W_A_E_M_T_C_I_A_N_I_M_O_3_f_gold ( abs ( odd_count - even_count ) ) ; 
    } 
WRITE_AN_EFFICIENT_METHOD_TO_CHECK_IF_A_NUMBER_IS_MULTIPLE_OF_3() {}
};