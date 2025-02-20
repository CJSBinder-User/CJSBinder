#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBER_WAYS_TILE_FLOOR_SIZE_N_X_M_USING_1_X_M_SIZE_TILES {
public:
    int C_N_W_T_F_S_N_X_M_U_1_X_M_S_T_f_gold(int n, int m)
    { 
        int count [ n + 1 ] ; 
        count [ 0 ] = 0 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) { 
            if ( i > m ) count [ i ] = count [ i - 1 ] + count [ i - m ] ; 
            else if ( i < m ) count [ i ] = 1 ; 
            else count [ i ] = 2 ; 
        } 
        return count [ n ] ; 
    } 
COUNT_NUMBER_WAYS_TILE_FLOOR_SIZE_N_X_M_USING_1_X_M_SIZE_TILES() {}
};