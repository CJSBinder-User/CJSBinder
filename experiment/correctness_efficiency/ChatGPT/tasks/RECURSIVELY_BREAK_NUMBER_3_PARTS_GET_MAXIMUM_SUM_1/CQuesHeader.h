#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class RECURSIVELY_BREAK_NUMBER_3_PARTS_GET_MAXIMUM_SUM_1 {
public:
    int R_B_N_3_P_G_M_S_1_f_gold(int n)
    { 
        int dp [ n + 1 ] ; 
        dp [ 0 ] = 0 , dp [ 1 ] = 1 ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) dp [ i ] = max ( dp [ i / 2 ] + dp [ i / 3 ] + dp [ i / 4 ] , i ) ; 
        return dp [ n ] ; 
    } 
RECURSIVELY_BREAK_NUMBER_3_PARTS_GET_MAXIMUM_SUM_1() {}
};