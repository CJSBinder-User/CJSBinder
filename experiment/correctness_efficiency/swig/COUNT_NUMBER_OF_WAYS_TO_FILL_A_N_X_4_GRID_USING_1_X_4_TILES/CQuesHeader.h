#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBER_OF_WAYS_TO_FILL_A_N_X_4_GRID_USING_1_X_4_TILES {
public:
    int C_N_O_W_T_F_A_N_X_4_G_U_1_X_4_T_f_gold(int n)
    { 
        int dp [ n + 1 ] ; 
        dp [ 0 ] = 0 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) { 
            if ( i >= 1 && i <= 3 ) dp [ i ] = 1 ; 
            else if ( i == 4 ) dp [ i ] = 2 ; 
            else dp [ i ] = dp [ i - 1 ] + dp [ i - 4 ] ; 
        } 
        return dp [ n ] ; 
    } 
COUNT_NUMBER_OF_WAYS_TO_FILL_A_N_X_4_GRID_USING_1_X_4_TILES() {}
};