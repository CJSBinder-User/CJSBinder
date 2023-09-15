#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_NUMBER_OF_JUMPS_TO_REACH_END_OF_A_GIVEN_ARRAY_1 {
public:
    int M_N_O_J_T_R_E_O_A_G_A_1_f_gold(int arr [], int n)
    { 
        int * jumps = new int [ n ] ; 
        int i , j ; 
        if ( n == 0 || arr [ 0 ] == 0 ) return INT_MAX ; 
        jumps [ 0 ] = 0 ; 
        for ( i = 1 ; 
        i < n ; 
        i ++ ) { 
            jumps [ i ] = INT_MAX ; 
            for ( j = 0 ; 
            j < i ; 
            j ++ ) { 
                if ( i <= j + arr [ j ] && jumps [ j ] != INT_MAX ) { 
                    jumps [ i ] = min ( jumps [ i ] , jumps [ j ] + 1 ) ; 
                    break ; 
                } 
            } 
        } 
        return jumps [ n - 1 ] ; 
    } 
MINIMUM_NUMBER_OF_JUMPS_TO_REACH_END_OF_A_GIVEN_ARRAY_1() {}
};