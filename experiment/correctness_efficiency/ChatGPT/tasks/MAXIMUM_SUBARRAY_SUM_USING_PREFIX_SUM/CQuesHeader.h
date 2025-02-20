#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_SUBARRAY_SUM_USING_PREFIX_SUM {
public:
    int M_S_S_U_P_S_f_gold(int arr [], int n)
    { 
        int min_prefix_sum = 0 ; 
        int res = numeric_limits < int > :: min ( ) ; 
        int prefix_sum [ n ] ; 
        prefix_sum [ 0 ] = arr [ 0 ] ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) prefix_sum [ i ] = prefix_sum [ i - 1 ] + arr [ i ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            res = max ( res , prefix_sum [ i ] - min_prefix_sum ) ; 
            min_prefix_sum = min ( min_prefix_sum , prefix_sum [ i ] ) ; 
        } 
        return res ; 
    } 
MAXIMUM_SUBARRAY_SUM_USING_PREFIX_SUM() {}
};