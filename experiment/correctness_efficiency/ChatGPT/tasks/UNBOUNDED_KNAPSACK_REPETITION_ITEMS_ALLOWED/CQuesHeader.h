#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class UNBOUNDED_KNAPSACK_REPETITION_ITEMS_ALLOWED {
public:
    int U_K_R_I_A_f_gold(int W, int n, int val [], int wt [])
    { 
        int dp [ W + 1 ] ; 
        memset ( dp , 0 , sizeof dp ) ; 
        int ans = 0 ; 
        for ( int i = 0 ; 
        i <= W ; 
        i ++ ) for ( int j = 0 ; 
        j < n ; 
        j ++ ) if ( wt [ j ] <= i && i - wt [ j ] <= W ) dp [ i ] = max ( dp [ i ] , dp [ i - wt [ j ] ] + val [ j ] ) ; 
        return dp [ W ] ; 
    } 
UNBOUNDED_KNAPSACK_REPETITION_ITEMS_ALLOWED() {}
};