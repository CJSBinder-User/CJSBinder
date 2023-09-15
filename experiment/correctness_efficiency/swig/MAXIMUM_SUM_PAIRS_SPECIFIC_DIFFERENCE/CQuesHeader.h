#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_SUM_PAIRS_SPECIFIC_DIFFERENCE {
public:
    int M_S_P_S_D_f_gold(int arr [], int N, int K)
    { 
        sort ( arr , arr + N ) ; 
        int dp [ N ] ; 
        dp [ 0 ] = 0 ; 
        for ( int i = 1 ; 
        i < N ; 
        i ++ ) { 
            dp [ i ] = dp [ i - 1 ] ; 
            if ( arr [ i ] - arr [ i - 1 ] < K ) { 
                if ( i >= 2 ) dp [ i ] = max ( dp [ i ] , dp [ i - 2 ] + arr [ i ] + arr [ i - 1 ] ) ; 
                else dp [ i ] = max ( dp [ i ] , arr [ i ] + arr [ i - 1 ] ) ; 
            } 
        } 
        return dp [ N - 1 ] ; 
    } 
MAXIMUM_SUM_PAIRS_SPECIFIC_DIFFERENCE() {}
};