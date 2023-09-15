#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SPACE_OPTIMIZED_DP_SOLUTION_0_1_KNAPSACK_PROBLEM_1 {
public:
    int S_O_D_S_0_1_K_P_1_f_gold(int val [], int wt [], int n, int W)
    { 
        int dp [ W + 1 ] ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = W ; 
        j >= wt [ i ] && j - wt[i] <= W ; 
        j -- ) dp [ j ] = max ( dp [ j ] , val [ i ] + dp [ j - wt [ i ] ] ) ; 
        return dp [ W ] ; 
    } 
SPACE_OPTIMIZED_DP_SOLUTION_0_1_KNAPSACK_PROBLEM_1() {}
};