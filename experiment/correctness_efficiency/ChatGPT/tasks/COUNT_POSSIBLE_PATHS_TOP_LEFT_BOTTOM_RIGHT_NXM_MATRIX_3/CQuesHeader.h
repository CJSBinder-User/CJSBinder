#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_POSSIBLE_PATHS_TOP_LEFT_BOTTOM_RIGHT_NXM_MATRIX_3 {
public:
    int C_P_P_T_L_B_R_N_M_3_f_gold(int m, int n)
    { 
        int path = 1 ; 
        for ( int i = n ; 
        i < ( m + n - 1 ) ; 
        i ++ ) { 
            path *= i ; 
            path /= ( i - n + 1 ) ; 
        } 
        return path ; 
    } 
COUNT_POSSIBLE_PATHS_TOP_LEFT_BOTTOM_RIGHT_NXM_MATRIX_3() {}
};