#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_POSSIBLE_PATHS_TOP_LEFT_BOTTOM_RIGHT_NXM_MATRIX_1 {
public:
    int C_P_P_T_L_B_R_N_M_1_f_gold(int m, int n)
    { 
        int count [ m ] [ n ] ; 
        for ( int i = 0 ; 
        i < m ; 
        i ++ ) count [ i ] [ 0 ] = 1 ; 
        for ( int j = 0 ; 
        j < n ; 
        j ++ ) count [ 0 ] [ j ] = 1 ; 
        for ( int i = 1 ; 
        i < m ; 
        i ++ ) { 
            for ( int j = 1 ; 
            j < n ; 
            j ++ ) count [ i ] [ j ] = count [ i - 1 ] [ j ] + count [ i ] [ j - 1 ] ; 
        } 
        return count [ m - 1 ] [ n - 1 ] ; 
    } 
COUNT_POSSIBLE_PATHS_TOP_LEFT_BOTTOM_RIGHT_NXM_MATRIX_1() {}
};