#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_VALUE_OF_Y_MOD_2_RAISED_TO_POWER_X {
public:
    long long F_V_O_Y_M_2_R_T_P_X_f_gold(long long y, long long x)
    { 
        if ( log2 ( y ) < x ) return y ; 
        if ( x > 63 ) return y ; 
        return ( y % ( 1 << x ) ) ; 
    } 
FIND_VALUE_OF_Y_MOD_2_RAISED_TO_POWER_X() {}
};