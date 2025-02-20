#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class K_NUMBERS_DIFFERENCE_MAXIMUM_MINIMUM_K_NUMBER_MINIMIZED {
public:
    int K_N_D_M_M_K_N_M_f_gold(int arr [], int n, int k)
    { 
        int result = INT_MAX ; 
        sort ( arr , arr + n ) ; 
        for ( int i = 0 ; 
        i <= n - k ; 
        i ++ ) result = min ( result , arr [ i + k - 1 ] - arr [ i ] ) ; 
        return result ; 
    } 
K_NUMBERS_DIFFERENCE_MAXIMUM_MINIMUM_K_NUMBER_MINIMIZED() {}
};