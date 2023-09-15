#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class K_TH_DISTINCT_OR_NON_REPEATING_ELEMENT_IN_AN_ARRAY {
public:
    int K_T_D_O_N_R_E_I_A_A_f_gold(int arr [], int n, int k)
    { 
        int dist_count = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int j ; 
            for ( j = 0 ; 
            j < n ; 
            j ++ ) if ( i != j && arr [ j ] == arr [ i ] ) break ; 
            if ( j == n ) dist_count ++ ; 
            if ( dist_count == k ) return arr [ i ] ; 
        } 
        return - 1 ; 
    } 
K_TH_DISTINCT_OR_NON_REPEATING_ELEMENT_IN_AN_ARRAY() {}
};