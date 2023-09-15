#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_COUNT_OCCURRENCE_GIVEN_CHARACTER_STRING {
public:
    int P_C_O_G_C_S_f_gold(string s, char c)
    { 
        int res = 0 ; 
        for ( int i = 0 ; 
        i < s . length ( ) ; 
        i ++ ) if ( s [ i ] == c ) res ++ ; 
        return res ; 
    } 
PROGRAM_COUNT_OCCURRENCE_GIVEN_CHARACTER_STRING() {}
};