#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_WHETHER_ARITHMETIC_PROGRESSION_CAN_FORMED_GIVEN_ARRAY {
public:
    bool C_W_A_P_C_F_G_A_f_gold(int arr [], int n)
    { 
        if ( n == 1 ) return true ; 
        sort ( arr , arr + n ) ; 
        int d = arr [ 1 ] - arr [ 0 ] ; 
        for ( int i = 2 ; 
        i < n ; 
        i ++ ) if ( arr [ i ] - arr [ i - 1 ] != d ) return false ; 
        return true ; 
    } 
CHECK_WHETHER_ARITHMETIC_PROGRESSION_CAN_FORMED_GIVEN_ARRAY() {}
};