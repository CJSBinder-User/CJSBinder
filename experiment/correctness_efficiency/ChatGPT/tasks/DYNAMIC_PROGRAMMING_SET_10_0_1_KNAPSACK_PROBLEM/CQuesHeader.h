#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_10_0_1_KNAPSACK_PROBLEM {
public:
    int D_P_S_1_0_1_K_P_f_gold(int W, int wt [], int val [], int n)
    { 
        if ( n == 0 || W == 0 ) return 0 ; 
        if ( wt [ n - 1 ] > W ) return D_P_S_1_0_1_K_P_f_gold ( W , wt , val , n - 1 ) ; 
        else return max ( val [ n - 1 ] + D_P_S_1_0_1_K_P_f_gold ( W - wt [ n - 1 ] , wt , val , n - 1 ) , D_P_S_1_0_1_K_P_f_gold ( W , wt , val , n - 1 ) ) ; 
    } 
DYNAMIC_PROGRAMMING_SET_10_0_1_KNAPSACK_PROBLEM() {}
};