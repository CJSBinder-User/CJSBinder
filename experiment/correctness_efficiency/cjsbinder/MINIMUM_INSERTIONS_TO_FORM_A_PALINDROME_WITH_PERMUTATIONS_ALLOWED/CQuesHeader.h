#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_INSERTIONS_TO_FORM_A_PALINDROME_WITH_PERMUTATIONS_ALLOWED {
public:
    int M_I_T_F_A_P_W_P_A_f_gold(string str)
    { 
        int n = str . length ( ) ; 
        int res = 0 ; 
        int count [ 26 ] = { 
            0 } 
        ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) count [ str [ i ] - 'a' ] ++ ; 
        for ( int i = 0 ; 
        i < 26 ; 
        i ++ ) if ( count [ i ] % 2 == 1 ) res ++ ; 
        return ( res == 0 ) ? 0 : res - 1 ; 
    } 
MINIMUM_INSERTIONS_TO_FORM_A_PALINDROME_WITH_PERMUTATIONS_ALLOWED() {}
};