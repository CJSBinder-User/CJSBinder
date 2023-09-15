#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_POSSIBLE_PATHS_TOP_LEFT_BOTTOM_RIGHT_NXM_MATRIX_2 {
public:
    int C_P_P_T_L_B_R_N_M_2_f_gold(int m, int n)
    { 
        int dp [ n ] = { 
            1 } 
        ; 
        dp [ 0 ] = 1 ; 
        for ( int i = 0 ; 
        i < m ; 
        i ++ ) { 
            for ( int j = 1 ; 
            j < n ; 
            j ++ ) { 
                dp [ j ] += dp [ j - 1 ] ; 
            } 
        } 
        return dp [ n - 1 ] ; 
    } 
COUNT_POSSIBLE_PATHS_TOP_LEFT_BOTTOM_RIGHT_NXM_MATRIX_2() {}
};