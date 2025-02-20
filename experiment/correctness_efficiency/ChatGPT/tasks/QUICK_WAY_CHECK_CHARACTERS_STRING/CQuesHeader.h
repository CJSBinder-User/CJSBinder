#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class QUICK_WAY_CHECK_CHARACTERS_STRING {
public:
    bool Q_W_C_C_S_f_gold(string s)
    { 
        int n = s . length ( ) ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) if ( s [ i ] != s [ 0 ] ) return false ; 
        return true ; 
    } 
QUICK_WAY_CHECK_CHARACTERS_STRING() {}
};