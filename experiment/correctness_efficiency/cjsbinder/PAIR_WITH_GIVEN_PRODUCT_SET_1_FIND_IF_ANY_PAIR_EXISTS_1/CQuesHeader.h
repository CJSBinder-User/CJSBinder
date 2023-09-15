#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PAIR_WITH_GIVEN_PRODUCT_SET_1_FIND_IF_ANY_PAIR_EXISTS_1 {
public:
    bool P_W_G_P_S_1_F_I_A_P_E_1_f_gold(int arr [], int n, int x)
    { 
        if ( n < 2 ) return false ; 
        unordered_set < int > s ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] == 0 ) { 
                if ( x == 0 ) return true ; 
                else continue ; 
            } 
            if ( x % arr [ i ] == 0 ) { 
                if ( s . find ( x / arr [ i ] ) != s . end ( ) ) return true ; 
                s . insert ( arr [ i ] ) ; 
            } 
        } 
        return false ; 
    } 
PAIR_WITH_GIVEN_PRODUCT_SET_1_FIND_IF_ANY_PAIR_EXISTS_1() {}
};