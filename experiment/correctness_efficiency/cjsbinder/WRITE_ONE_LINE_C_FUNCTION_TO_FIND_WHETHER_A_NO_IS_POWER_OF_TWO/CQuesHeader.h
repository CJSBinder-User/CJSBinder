#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class WRITE_ONE_LINE_C_FUNCTION_TO_FIND_WHETHER_A_NO_IS_POWER_OF_TWO {
public:
    bool W_O_L_C_F_T_F_W_A_N_I_P_O_T_f_gold(int n)
    { 
        if ( n == 0 ) return 0 ; 
        while ( n != 1 ) { 
            if ( n % 2 != 0 ) return 0 ; 
            n = n / 2 ; 
        } 
        return 1 ; 
    } 
WRITE_ONE_LINE_C_FUNCTION_TO_FIND_WHETHER_A_NO_IS_POWER_OF_TWO() {}
};