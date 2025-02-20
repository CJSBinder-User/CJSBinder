#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_FIBONACCI_NUMBERS_GIVEN_RANGE_LOG_TIME {
public:
    int C_F_N_G_R_L_T_f_gold(int low, int high)
    { 
        int f1 = 0 , f2 = 1 , f3 = 1 ; 
        int result = 0 ; 
        while ( f1 <= high ) { 
            if ( f1 >= low ) result ++ ; 
            f1 = f2 ; 
            f2 = f3 ; 
            f3 = f1 + f2 ; 
        } 
        return result ; 
    } 
COUNT_FIBONACCI_NUMBERS_GIVEN_RANGE_LOG_TIME() {}
};