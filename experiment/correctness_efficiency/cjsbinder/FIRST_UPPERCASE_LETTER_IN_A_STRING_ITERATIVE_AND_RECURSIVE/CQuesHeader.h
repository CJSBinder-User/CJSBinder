#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE {
public:
    char F_U_L_I_A_S_I_A_R_f_gold(string str)
    { 
        for ( int i = 0 ; 
        i < str . length ( ) ; 
        i ++ ) if ( isupper ( str [ i ] ) ) return str [ i ] ; 
        return 0 ; 
    } 
FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE() {}
};