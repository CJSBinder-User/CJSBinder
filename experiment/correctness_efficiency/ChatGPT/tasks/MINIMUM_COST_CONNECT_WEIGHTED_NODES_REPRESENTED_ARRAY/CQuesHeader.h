#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_COST_CONNECT_WEIGHTED_NODES_REPRESENTED_ARRAY {
public:
    int M_C_C_W_N_R_A_f_gold(int a [], int n)
    { 
        int mn = INT_MAX ; 
        int sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            mn = min ( a [ i ] , mn ) ; 
            sum += a [ i ] ; 
        } 
        return mn * ( sum - mn ) ; 
    } 
MINIMUM_COST_CONNECT_WEIGHTED_NODES_REPRESENTED_ARRAY() {}
};