#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_SUM_SUBSEQUENCE_LEAST_ONE_EVERY_FOUR_CONSECUTIVE_ELEMENTS_PICKED {
public:
    int M_S_S_L_O_E_F_C_E_P_f_gold(int arr [], int n)
    { 
        int dp [ n ] ; 
        if ( n == 1 ) return arr [ 0 ] ; 
        if ( n == 2 ) return min ( arr [ 0 ] , arr [ 1 ] ) ; 
        if ( n == 3 ) return min ( arr [ 0 ] , min ( arr [ 1 ] , arr [ 2 ] ) ) ; 
        if ( n == 4 ) return min ( min ( arr [ 0 ] , arr [ 1 ] ) , min ( arr [ 2 ] , arr [ 3 ] ) ) ; 
        dp [ 0 ] = arr [ 0 ] ; 
        dp [ 1 ] = arr [ 1 ] ; 
        dp [ 2 ] = arr [ 2 ] ; 
        dp [ 3 ] = arr [ 3 ] ; 
        for ( int i = 4 ; 
        i < n ; 
        i ++ ) dp [ i ] = arr [ i ] + min ( min ( dp [ i - 1 ] , dp [ i - 2 ] ) , min ( dp [ i - 3 ] , dp [ i - 4 ] ) ) ; 
        return min ( min ( dp [ n - 1 ] , dp [ n - 2 ] ) , min ( dp [ n - 4 ] , dp [ n - 3 ] ) ) ; 
    } 
MINIMUM_SUM_SUBSEQUENCE_LEAST_ONE_EVERY_FOUR_CONSECUTIVE_ELEMENTS_PICKED() {}
};