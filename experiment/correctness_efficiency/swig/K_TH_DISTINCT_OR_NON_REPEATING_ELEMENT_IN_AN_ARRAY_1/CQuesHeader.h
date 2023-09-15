#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class K_TH_DISTINCT_OR_NON_REPEATING_ELEMENT_IN_AN_ARRAY_1 {
public:
    int K_T_D_O_N_R_E_I_A_A_1_f_gold(int arr [], int n, int k)
    { 
        unordered_map < int , int > h ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) h [ arr [ i ] ] ++ ; 
        if ( h . size ( ) < k ) return - 1 ; 
        int dist_count = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( h [ arr [ i ] ] == 1 ) dist_count ++ ; 
            if ( dist_count == k ) return arr [ i ] ; 
        } 
        return - 1 ; 
    } 
K_TH_DISTINCT_OR_NON_REPEATING_ELEMENT_IN_AN_ARRAY_1() {}
};