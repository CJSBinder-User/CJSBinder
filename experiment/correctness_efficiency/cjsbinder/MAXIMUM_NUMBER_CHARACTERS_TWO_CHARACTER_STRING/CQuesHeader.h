#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_NUMBER_CHARACTERS_TWO_CHARACTER_STRING {
public:
    int M_N_C_T_C_S_f_gold(string & str)
    { 
        int n = str . length ( ) ; 
        int res = - 1 ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) for ( int j = i + 1 ; 
        j < n ; 
        j ++ ) if ( str [ i ] == str [ j ] ) res = max ( res , abs ( j - i - 1 ) ) ; 
        return res ; 
    } 
MAXIMUM_NUMBER_CHARACTERS_TWO_CHARACTER_STRING() {}
};