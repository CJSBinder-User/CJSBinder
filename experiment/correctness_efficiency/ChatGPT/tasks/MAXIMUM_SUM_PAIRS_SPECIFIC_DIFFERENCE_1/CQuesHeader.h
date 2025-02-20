#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_SUM_PAIRS_SPECIFIC_DIFFERENCE_1 {
public:
    int M_S_P_S_D_1_f_gold(int arr [], int N, int k)
    { 
        int maxSum = 0 ; 
        sort ( arr , arr + N ) ; 
        for ( int i = N - 1 ; 
        i > 0 ; 
        -- i ) { 
            if ( arr [ i ] - arr [ i - 1 ] < k ) { 
                maxSum += arr [ i ] ; 
                maxSum += arr [ i - 1 ] ; 
                -- i ; 
            } 
        } 
        return maxSum ; 
    } 
MAXIMUM_SUM_PAIRS_SPECIFIC_DIFFERENCE_1() {}
};