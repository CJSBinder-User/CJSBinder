#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class REPLACE_CHARACTER_C1_C2_C2_C1_STRING_S {
public:
    string R_C_C_C_C_C_S_S_f_gold(string s, char c1, char c2)
    { 
        int l = s . length ( ) ; 
        for ( int i = 0 ; 
        i < l ; 
        i ++ ) { 
            if ( s [ i ] == c1 ) s [ i ] = c2 ; 
            else if ( s [ i ] == c2 ) s [ i ] = c1 ; 
        } 
        return s ; 
    } 
REPLACE_CHARACTER_C1_C2_C2_C1_STRING_S() {}
};