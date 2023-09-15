#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MAXIMUM_AVERAGE_SUBARRAY_OF_K_LENGTH {
public:
    int F_M_A_S_O_K_L_f_gold(int arr [], int n, int k)
    { 
        if ( k > n ) return - 1 ; 
        int * csum = new int [ n ] ; 
        csum [ 0 ] = arr [ 0 ] ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) csum [ i ] = csum [ i - 1 ] + arr [ i ] ; 
        int max_sum = csum [ k - 1 ] , max_end = k - 1 ; 
        for ( int i = k ; 
        i < n ; 
        i ++ ) { 
            int curr_sum = csum [ i ] - csum [ i - k ] ; 
            if ( curr_sum > max_sum ) { 
                max_sum = curr_sum ; 
                max_end = i ; 
            } 
        } 
        delete [ ] csum ; 
        return max_end - k + 1 ; 
    } 
FIND_MAXIMUM_AVERAGE_SUBARRAY_OF_K_LENGTH() {}
};