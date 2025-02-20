#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT {
public:
    bool D_R_G_B_S_D_1_N_f_gold(string bin)
    { 
        int n = bin . size ( ) ; 
        if ( bin [ n - 1 ] == '1' ) return false ; 
        int sum = 0 ; 
        for ( int i = n - 2 ; 
        i >= 0 ; 
        i -- ) { 
            if ( bin [ i ] == '1' ) { 
                int posFromRight = n - i - 1 ; 
                if ( posFromRight % 4 == 1 ) sum = sum + 2 ; 
                else if ( posFromRight % 4 == 2 ) sum = sum + 4 ; 
                else if ( posFromRight % 4 == 3 ) sum = sum + 8 ; 
                else if ( posFromRight % 4 == 0 ) sum = sum + 6 ; 
            } 
        } 
        if ( sum % 10 == 0 ) return true ; 
        return false ; 
    } 
DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT() {}
};