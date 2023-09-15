#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_XOR_VALUE_PAIR_1 {
public:
    int M_X_V_P_1_f_gold(int arr [], int n)
    { 
        sort ( arr , arr + n ) ; 
        int minXor = INT_MAX ; 
        int val = 0 ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) { 
            val = arr [ i ] ^ arr [ i + 1 ] ; 
            minXor = min ( minXor , val ) ; 
        } 
        return minXor ; 
    } 
MINIMUM_XOR_VALUE_PAIR_1() {}
};