#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MAXIMUM_AVERAGE_SUBARRAY_OF_K_LENGTH_1 {
public:
    int F_M_A_S_O_K_L_1_f_gold(int arr [], int n, int k)
    { 
        if ( k > n ) return - 1 ; 
        int sum = arr [ 0 ] ; 
        for ( int i = 1 ; 
        i < k ; 
        i ++ ) sum += arr [ i ] ; 
        int max_sum = sum , max_end = k - 1 ; 
        for ( int i = k ; 
        i < n ; 
        i ++ ) { 
            sum = sum + arr [ i ] - arr [ i - k ] ; 
            if ( sum > max_sum ) { 
                max_sum = sum ; 
                max_end = i ; 
            } 
        } 
        return max_end - k + 1 ; 
    } 
FIND_MAXIMUM_AVERAGE_SUBARRAY_OF_K_LENGTH_1() {}
};