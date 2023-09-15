#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_CHECK_INPUT_INTEGER_STRING {
public:
    bool P_C_I_I_S_f_gold(string s)
    { 
        for ( int i = 0 ; 
        i < s . length ( ) ; 
        i ++ ) if ( isdigit ( s [ i ] ) == false ) return false ; 
        return true ; 
    } 
PROGRAM_CHECK_INPUT_INTEGER_STRING() {}
};