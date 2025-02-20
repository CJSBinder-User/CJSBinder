#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_OFDIFFERENT_WAYS_EXPRESS_N_SUM_1_3_4 {
public:
    int C_O_W_E_N_S_1_3_4_f_gold(int n)
    { 
        int DP [ n + 1 ] ; 
        DP [ 0 ] = DP [ 1 ] = DP [ 2 ] = 1 ; 
        DP [ 3 ] = 2 ; 
        for ( int i = 4 ; 
        i <= n ; 
        i ++ ) DP [ i ] = DP [ i - 1 ] + DP [ i - 3 ] + DP [ i - 4 ] ; 
        return DP [ n ] ; 
    } 
COUNT_OFDIFFERENT_WAYS_EXPRESS_N_SUM_1_3_4() {}
};