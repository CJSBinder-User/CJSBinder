#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_SUBSTRINGS_WITH_SAME_FIRST_AND_LAST_CHARACTERS {
public:
    int C_S_W_S_F_A_L_C_f_gold(string s)
    { 
        int result = 0 ; 
        int n = s . length ( ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = i ; 
        j < n ; 
        j ++ ) if ( s [ i ] == s [ j ] ) result ++ ; 
        return result ; 
    } 
COUNT_SUBSTRINGS_WITH_SAME_FIRST_AND_LAST_CHARACTERS() {}
};