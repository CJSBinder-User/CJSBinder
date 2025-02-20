#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class WAYS_REMOVE_ONE_ELEMENT_BINARY_STRING_XOR_BECOMES_ZERO {
public:
    int W_R_O_E_B_S_X_B_Z_f_gold(string str)
    { 
        int one_count = 0 , zero_count = 0 ; 
        int n = str . length ( ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( str [ i ] == '1' ) one_count ++ ; 
        else zero_count ++ ; 
        if ( one_count % 2 == 0 ) return zero_count ; 
        return one_count ; 
    } 
WAYS_REMOVE_ONE_ELEMENT_BINARY_STRING_XOR_BECOMES_ZERO() {}
};