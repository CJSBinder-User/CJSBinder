#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_SUM_CONTIGUOUS_SUBARRAY {
public:
    int S_S_C_S_f_gold(int arr [], int n)
    { 
        int min_ending_here = INT_MAX ; 
        int min_so_far = INT_MAX ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( min_ending_here > 0 ) min_ending_here = arr [ i ] ; 
            else min_ending_here += arr [ i ] ; 
            min_so_far = min ( min_so_far , min_ending_here ) ; 
        } 
        return min_so_far ; 
    } 
SMALLEST_SUM_CONTIGUOUS_SUBARRAY() {}
};