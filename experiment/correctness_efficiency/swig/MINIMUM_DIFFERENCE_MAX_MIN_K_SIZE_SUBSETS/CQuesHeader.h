#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_DIFFERENCE_MAX_MIN_K_SIZE_SUBSETS {
public:
    int M_D_M_M_K_S_S_f_gold(int arr [], int N, int K)
    { 
        sort ( arr , arr + N ) ; 
        int res = INT_MAX ; 
        for ( int i = 0 ; 
        i <= ( N - K ) ; 
        i ++ ) { 
            int curSeqDiff = arr [ i + K - 1 ] - arr [ i ] ; 
            res = min ( res , curSeqDiff ) ; 
        } 
        return res ; 
    } 
MINIMUM_DIFFERENCE_MAX_MIN_K_SIZE_SUBSETS() {}
};