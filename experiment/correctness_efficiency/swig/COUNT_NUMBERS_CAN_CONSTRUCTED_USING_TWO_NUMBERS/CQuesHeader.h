#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBERS_CAN_CONSTRUCTED_USING_TWO_NUMBERS {
public:
    int C_N_C_C_U_T_N_f_gold(int n, int x, int y)
    { 
        vector < bool > arr ( n + 1 , false ) ; 
        if ( x <= n ) arr [ x ] = true ; 
        if ( y <= n ) arr [ y ] = true ; 
        int result = 0 ; 
        for ( int i = min ( x , y ) ; 
        i <= n ; 
        i ++ ) { 
            if ( arr [ i ] ) { 
                if ( i + x <= n ) arr [ i + x ] = true ; 
                if ( i + y <= n ) arr [ i + y ] = true ; 
                result ++ ; 
            } 
        } 
        return result ; 
    } 
COUNT_NUMBERS_CAN_CONSTRUCTED_USING_TWO_NUMBERS() {}
};