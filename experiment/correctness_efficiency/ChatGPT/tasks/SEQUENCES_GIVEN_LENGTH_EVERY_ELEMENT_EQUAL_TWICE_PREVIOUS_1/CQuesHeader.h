#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEQUENCES_GIVEN_LENGTH_EVERY_ELEMENT_EQUAL_TWICE_PREVIOUS_1 {
public:
    int S_G_L_E_E_E_T_P_1_f_gold(int m, int n)
    { 
        int T [ m + 1 ] [ n + 1 ] ; 
        for ( int i = 0 ; 
        i < m + 1 ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j < n + 1 ; 
            j ++ ) { 
                if ( i == 0 || j == 0 ) T [ i ] [ j ] = 0 ; 
                else if ( i < j ) T [ i ] [ j ] = 0 ; 
                else if ( j == 1 ) T [ i ] [ j ] = i ; 
                else T [ i ] [ j ] = T [ i - 1 ] [ j ] + T [ i / 2 ] [ j - 1 ] ; 
            } 
        } 
        return T [ m ] [ n ] ; 
    } 
SEQUENCES_GIVEN_LENGTH_EVERY_ELEMENT_EQUAL_TWICE_PREVIOUS_1() {}
};