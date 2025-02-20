#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PAIR_WITH_GIVEN_PRODUCT_SET_1_FIND_IF_ANY_PAIR_EXISTS {
public:
    bool P_W_G_P_S_1_F_I_A_P_E_f_gold(int arr [], int n, int x)
    { 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) for ( int j = i + 1 ; 
        i < n ; 
        i ++ ) if ( arr [ i ] * arr [ j ] == x ) return true ; 
        return false ; 
    } 
PAIR_WITH_GIVEN_PRODUCT_SET_1_FIND_IF_ANY_PAIR_EXISTS() {}
};