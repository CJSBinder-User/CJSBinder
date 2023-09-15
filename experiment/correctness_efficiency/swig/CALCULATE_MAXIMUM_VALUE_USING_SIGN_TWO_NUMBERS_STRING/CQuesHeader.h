#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING {
public:
    int C_M_V_U_S_T_N_S_f_gold(string str)
    { 
        int res = str [ 0 ] - '0' ; 
        for ( int i = 1 ; 
        i < str . length ( ) ; 
        i ++ ) { 
            if ( str [ i ] == '0' || str [ i ] == '1' || res < 2 ) res += ( str [ i ] - '0' ) ; 
            else res *= ( str [ i ] - '0' ) ; 
        } 
        return res ; 
    } 
CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING() {}
};