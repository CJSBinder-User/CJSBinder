#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_SUM_BITONIC_SUBARRAY {
public:
    int M_S_B_S_f_gold(int arr [], int n)
    { 
        int msis [ n ] , msds [ n ] ; 
        int max_sum = INT_MIN ; 
        msis [ 0 ] = arr [ 0 ] ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) if ( arr [ i ] > arr [ i - 1 ] ) msis [ i ] = msis [ i - 1 ] + arr [ i ] ; 
        else msis [ i ] = arr [ i ] ; 
        msds [ n - 1 ] = arr [ n - 1 ] ; 
        for ( int i = n - 2 ; 
        i >= 0 ; 
        i -- ) if ( arr [ i ] > arr [ i + 1 ] ) msds [ i ] = msds [ i + 1 ] + arr [ i ] ; 
        else msds [ i ] = arr [ i ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( max_sum < ( msis [ i ] + msds [ i ] - arr [ i ] ) ) max_sum = msis [ i ] + msds [ i ] - arr [ i ] ; 
        return max_sum ; 
    } 
MAXIMUM_SUM_BITONIC_SUBARRAY() {}
};