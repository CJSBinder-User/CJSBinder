#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_OF_SUBSTRINGS_WITH_ODD_DECIMAL_VALUE_IN_A_BINARY_STRING {
public:
    int N_O_S_W_O_D_V_I_A_B_S_f_gold(string s)
    { 
        int n = s . length ( ) ; 
        int auxArr [ n ] = { 
            0 } 
        ; 
        if ( s [ 0 ] == '1' ) auxArr [ 0 ] = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            if ( s [ i ] == '1' ) auxArr [ i ] = auxArr [ i - 1 ] + 1 ; 
            else auxArr [ i ] = auxArr [ i - 1 ] ; 
        } 
        int count = 0 ; 
        for ( int i = n - 1 ; 
        i >= 0 ; 
        i -- ) if ( s [ i ] == '1' ) count += auxArr [ i ] ; 
        return count ; 
    } 
NUMBER_OF_SUBSTRINGS_WITH_ODD_DECIMAL_VALUE_IN_A_BINARY_STRING() {}
};