#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_SUBSEQUENCES_AB_STRING_REPEATED_K_TIMES {
public:
    int N_S_A_S_R_K_T_f_gold(string s, int K)
    { 
        int n = s . length ( ) ; 
        int C = 0, c1 = 0 , c2 = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( s [ i ] == 'a' ) c1 ++ ; 
            if ( s [ i ] == 'b' ) { 
                c2 ++ ; 
                C += c1 ; 
            } 
        } 
        return C * K + ( K * ( K - 1 ) / 2 ) * c1 * c2 ; 
    } 
NUMBER_SUBSEQUENCES_AB_STRING_REPEATED_K_TIMES() {}
};