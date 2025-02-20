#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_NUMBER_OF_JUMPS_TO_REACH_END_OF_A_GIVEN_ARRAY_2 {
public:
    int M_N_O_J_T_R_E_O_A_G_A_2_f_gold(int arr [], int n)
    { 
        int * jumps = new int [ n ] ; 
        int min ; 
        jumps [ n - 1 ] = 0 ; 
        for ( int i = n - 2 ; 
        i >= 0 ; 
        i -- ) { 
            if ( arr [ i ] == 0 ) jumps [ i ] = INT_MAX ; 
            else if ( arr [ i ] >= n - i - 1 ) jumps [ i ] = 1 ; 
            else { 
                min = INT_MAX ; 
                for ( int j = i + 1 ; 
                j < n && j <= arr [ i ] + i ; 
                j ++ ) { 
                    if ( min > jumps [ j ] ) min = jumps [ j ] ; 
                } 
                if ( min != INT_MAX ) jumps [ i ] = min + 1 ; 
                else jumps [ i ] = min ; 
            } 
        } 
        return jumps [ 0 ] ; 
    } 
MINIMUM_NUMBER_OF_JUMPS_TO_REACH_END_OF_A_GIVEN_ARRAY_2() {}
};