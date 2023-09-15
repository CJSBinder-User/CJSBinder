#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMIZE_THE_MAXIMUM_DIFFERENCE_BETWEEN_THE_HEIGHTS {
public:
    int M_T_M_D_B_T_H_f_gold(int arr [], int n, int k)
    { 
        if ( n == 1 ) return 0 ; 
        sort ( arr , arr + n ) ; 
        int ans = arr [ n - 1 ] - arr [ 0 ] ; 
        int small = arr [ 0 ] + k ; 
        int big = arr [ n - 1 ] - k ; 
        if ( small > big ) swap ( small , big ) ; 
        for ( int i = 1 ; 
        i < n - 1 ; 
        i ++ ) { 
            int subtract = arr [ i ] - k ; 
            int add = arr [ i ] + k ; 
            if ( subtract >= small || add <= big ) continue ; 
            if ( big - subtract <= add - small ) small = subtract ; 
            else big = add ; 
        } 
        return min ( ans , big - small ) ; 
    } 
MINIMIZE_THE_MAXIMUM_DIFFERENCE_BETWEEN_THE_HEIGHTS() {}
};