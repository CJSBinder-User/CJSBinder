#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class EFFICIENTLY_FIND_FIRST_REPEATED_CHARACTER_STRING_WITHOUT_USING_ADDITIONAL_DATA_STRUCTURE_ONE_TRAVERSAL {
public:
    int E_F_F_R_C_S_W_U_A_D_S_O_T_f_gold(string str)
    { 
        int checker = 0 ; 
        for ( int i = 0 ; 
        i < str . length ( ) ; 
        ++ i ) { 
            int val = ( str [ i ] - 'a' ) ; 
            if ( ( checker & ( 1 << val ) ) > 0 ) return i ; 
            checker |= ( 1 << val ) ; 
        } 
        return - 1 ; 
    } 
EFFICIENTLY_FIND_FIRST_REPEATED_CHARACTER_STRING_WITHOUT_USING_ADDITIONAL_DATA_STRUCTURE_ONE_TRAVERSAL() {}
};