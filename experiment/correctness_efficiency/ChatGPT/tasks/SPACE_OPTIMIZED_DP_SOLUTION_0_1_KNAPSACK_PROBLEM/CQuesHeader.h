#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SPACE_OPTIMIZED_DP_SOLUTION_0_1_KNAPSACK_PROBLEM {
public:
    int S_O_D_S_0_1_K_P_f_gold(int val [], int wt [], int n, int W)
    { 
        int mat [ 2 ] [ W + 1 ] ; 
        memset ( mat , 0 , sizeof ( mat ) ) ; 
        int i = 0 ; 
        while ( i < n ) { 
            int j = 0 ; 
            if ( i % 2 != 0 ) { 
                while ( ++ j <= W ) { 
                    if ( wt [ i ] <= j && j - wt [ i ] <= W ) mat [ 1 ] [ j ] = max ( val [ i ] + mat [ 0 ] [ j - wt [ i ] ] , mat [ 0 ] [ j ] ) ; 
                    else mat [ 1 ] [ j ] = mat [ 0 ] [ j ] ; 
                } 
            } 
            else { 
                while ( ++ j <= W ) { 
                    if ( wt [ i ] <= j && j - wt [ i ] <= W ) mat [ 0 ] [ j ] = max ( val [ i ] + mat [ 1 ] [ j - wt [ i ] ] , mat [ 1 ] [ j ] ) ; 
                    else mat [ 0 ] [ j ] = mat [ 1 ] [ j ] ; 
                } 
            } 
            i ++ ; 
        } 
        return ( n % 2 != 0 ) ? mat [ 0 ] [ W ] : mat [ 1 ] [ W ] ; 
    } 
SPACE_OPTIMIZED_DP_SOLUTION_0_1_KNAPSACK_PROBLEM() {}
};