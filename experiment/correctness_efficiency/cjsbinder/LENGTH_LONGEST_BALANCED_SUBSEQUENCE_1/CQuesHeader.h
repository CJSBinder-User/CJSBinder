#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LENGTH_LONGEST_BALANCED_SUBSEQUENCE_1 {
public:
    int L_L_B_S_1_f_gold(string s , int n)
    { 
        int invalidOpenBraces = 0 ; 
        int invalidCloseBraces = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( s [ i ] == '(' ) { 
                invalidOpenBraces ++ ; 
            } 
            else { 
                if ( invalidOpenBraces == 0 ) { 
                    invalidCloseBraces ++ ; 
                } 
                else { 
                    invalidOpenBraces -- ; 
                } 
            } 
        } 
        return ( n - ( invalidOpenBraces + invalidCloseBraces ) ) ; 
    } 
LENGTH_LONGEST_BALANCED_SUBSEQUENCE_1() {}
};
