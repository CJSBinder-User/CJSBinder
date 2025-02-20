#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_STRING_FOLLOWS_ANBN_PATTERN_NOT {
public:
    bool C_S_F_A_P_N_f_gold(string str)
    { 
        int n = str . length ( ) ; 
        int i ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) if ( str [ i ] != 'a' ) break ; 
        if ( i * 2 != n ) return false ; 
        int j ; 
        for ( j = i ; 
        j < n ; 
        j ++ ) if ( str [ j ] != 'b' ) return false ; 
        return true ; 
    } 
CHECK_STRING_FOLLOWS_ANBN_PATTERN_NOT() {}
};