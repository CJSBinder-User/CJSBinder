#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_LARGEST_SUBARRAY_WITH_0_SUM {
public:
    int F_T_L_S_W_0_S_f_gold(int arr [], int n)
    { 
        int max_len = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int curr_sum = 0 ; 
            for ( int j = i ; 
            j < n ; 
            j ++ ) { 
                curr_sum += arr [ j ] ; 
                if ( curr_sum == 0 ) max_len = max ( max_len , j - i + 1 ) ; 
            } 
        } 
        return max_len ; 
    } 
FIND_THE_LARGEST_SUBARRAY_WITH_0_SUM() {}
};