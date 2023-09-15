#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1 {
public:
    char F_U_L_I_A_S_I_A_R_1_f_gold(string str, int i)
    { 
        if ( str [ i ] == '\0' ) return '0' ; 
        if ( isupper ( str [ i ] ) ) return str [ i ] ; 
        return F_U_L_I_A_S_I_A_R_1_f_gold ( str , i + 1 ) ; 
    } 
FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1() {}
};