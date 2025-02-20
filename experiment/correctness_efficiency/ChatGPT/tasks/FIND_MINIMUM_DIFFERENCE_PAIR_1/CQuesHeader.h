#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MINIMUM_DIFFERENCE_PAIR_1 {
public:
    int F_M_D_P_1_f_gold(int arr [], int n)
    { 
        sort ( arr , arr + n ) ; 
        int diff = INT_MAX ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) if ( arr [ i + 1 ] - arr [ i ] < diff ) diff = arr [ i + 1 ] - arr [ i ] ; 
        return diff ; 
    } 
FIND_MINIMUM_DIFFERENCE_PAIR_1() {}
};