#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class GIVEN_A_SORTED_AND_ROTATED_ARRAY_FIND_IF_THERE_IS_A_PAIR_WITH_A_GIVEN_SUM_1 {
public:
    int G_A_S_A_R_A_F_I_T_I_A_P_W_A_G_S_1_f_gold(int arr [], int n, int x)
    { 
        int i ; 
        for ( i = 0 ; 
        i < n - 1 ; 
        i ++ ) if ( arr [ i ] > arr [ i + 1 ] ) break ; 
        int l = ( i + 1 ) % n ; 
        int r = i ; 
        int cnt = 0 ; 
        while ( l != r ) { 
            if ( arr [ l ] + arr [ r ] == x ) { 
                cnt ++ ; 
                if ( l == ( r - 1 + n ) % n ) { 
                    return cnt ; 
                } 
                l = ( l + 1 ) % n ; 
                r = ( r - 1 + n ) % n ; 
            } 
            else if ( arr [ l ] + arr [ r ] < x ) l = ( l + 1 ) % n ; 
            else r = ( n + r - 1 ) % n ; 
        } 
        return cnt ; 
    } 
GIVEN_A_SORTED_AND_ROTATED_ARRAY_FIND_IF_THERE_IS_A_PAIR_WITH_A_GIVEN_SUM_1() {}
};