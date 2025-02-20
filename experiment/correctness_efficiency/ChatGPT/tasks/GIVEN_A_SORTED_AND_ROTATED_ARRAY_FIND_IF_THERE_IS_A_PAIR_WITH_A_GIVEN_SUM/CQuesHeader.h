#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class GIVEN_A_SORTED_AND_ROTATED_ARRAY_FIND_IF_THERE_IS_A_PAIR_WITH_A_GIVEN_SUM {
public:
    bool G_A_S_A_R_A_F_I_T_I_A_P_W_A_G_S_f_gold(int arr [], int n, int x)
    { 
        int i ; 
        for ( i = 0 ; 
        i < n - 1 ; 
        i ++ ) if ( arr [ i ] > arr [ i + 1 ] ) break ; 
        int l = ( i + 1 ) % n ; 
        int r = i ; 
        while ( l != r ) { 
            if ( arr [ l ] + arr [ r ] == x ) return true ; 
            if ( arr [ l ] + arr [ r ] < x ) l = ( l + 1 ) % n ; 
            else r = ( n + r - 1 ) % n ; 
        } 
        return false ; 
    } 
GIVEN_A_SORTED_AND_ROTATED_ARRAY_FIND_IF_THERE_IS_A_PAIR_WITH_A_GIVEN_SUM() {}
};