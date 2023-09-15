#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LARGEST_SUM_CONTIGUOUS_SUBARRAY_2 {
public:
    int L_S_C_S_2_f_gold(int a [], int size)
    { 
        int max_so_far = a [ 0 ] ; 
        int curr_max = a [ 0 ] ; 
        for ( int i = 1 ; 
        i < size ; 
        i ++ ) { 
            curr_max = max ( a [ i ] , curr_max + a [ i ] ) ; 
            max_so_far = max ( max_so_far , curr_max ) ; 
        } 
        return max_so_far ; 
    } 
LARGEST_SUM_CONTIGUOUS_SUBARRAY_2() {}
};