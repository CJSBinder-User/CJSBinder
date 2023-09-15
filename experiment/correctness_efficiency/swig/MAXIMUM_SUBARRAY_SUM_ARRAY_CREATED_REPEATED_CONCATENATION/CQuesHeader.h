#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_SUBARRAY_SUM_ARRAY_CREATED_REPEATED_CONCATENATION {
public:
    int M_S_S_A_C_R_C_f_gold(int a [], int n, int k)
    { 
        int max_so_far = INT_MIN , max_ending_here = 0 ; 
        for ( int i = 0 ; 
        i < n * k ; 
        i ++ ) { 
            max_ending_here = max_ending_here + a [ i % n ] ; 
            if ( max_so_far < max_ending_here ) max_so_far = max_ending_here ; 
            if ( max_ending_here < 0 ) max_ending_here = 0 ; 
        } 
        return max_so_far ; 
    } 
MAXIMUM_SUBARRAY_SUM_ARRAY_CREATED_REPEATED_CONCATENATION() {}
};