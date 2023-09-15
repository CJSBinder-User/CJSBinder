#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_NUMBER_OF_BRACKET_REVERSALS_NEEDED_TO_MAKE_AN_EXPRESSION_BALANCED {
public:
    int M_N_O_B_R_N_T_M_A_E_B_f_gold(string expr)
    { 
        int len = expr . length ( ) ; 
        if ( len % 2 ) return - 1 ; 
        stack < char > s ; 
        for ( int i = 0 ; 
        i < len ; 
        i ++ ) { 
            if ( expr [ i ] == '}' && ! s . empty ( ) ) { 
                if ( s . top ( ) == '{' ) s . pop ( ) ; 
                else s . push ( expr [ i ] ) ; 
            } 
            else s . push ( expr [ i ] ) ; 
        } 
        int red_len = s . size ( ) ; 
        int n = 0 ; 
        while ( ! s . empty ( ) && s . top ( ) == '{' ) { 
            s . pop ( ) ; 
            n ++ ; 
        } 
        return ( red_len / 2 + n % 2 ) ; 
    } 
MINIMUM_NUMBER_OF_BRACKET_REVERSALS_NEEDED_TO_MAKE_AN_EXPRESSION_BALANCED() {}
};