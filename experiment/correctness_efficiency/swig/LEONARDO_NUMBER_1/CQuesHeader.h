#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LEONARDO_NUMBER_1 {
public:
    int L_N_1_f_gold(int n)
    { 
        int dp [ n + 1 ] ; 
        dp [ 0 ] = dp [ 1 ] = 1 ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) dp [ i ] = dp [ i - 1 ] + dp [ i - 2 ] + 1 ; 
        return dp [ n ] ; 
    } 
LEONARDO_NUMBER_1() {}
};