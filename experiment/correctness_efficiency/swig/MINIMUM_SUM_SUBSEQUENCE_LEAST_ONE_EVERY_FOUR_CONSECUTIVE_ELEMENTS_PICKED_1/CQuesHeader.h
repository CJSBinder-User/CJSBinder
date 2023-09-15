#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_SUM_SUBSEQUENCE_LEAST_ONE_EVERY_FOUR_CONSECUTIVE_ELEMENTS_PICKED_1 {
public:
    int M_S_S_L_O_E_F_C_E_P_1_f_gold(int ar [], int n)
    { 
        if ( n <= 4 ) return * min_element ( ar , ar + n ) ; 
        int sum [ n ] ; 
        sum [ 0 ] = ar [ 0 ] ; 
        sum [ 1 ] = ar [ 1 ] ; 
        sum [ 2 ] = ar [ 2 ] ; 
        sum [ 3 ] = ar [ 3 ] ; 
        for ( int i = 4 ; 
        i < n ; 
        i ++ ) sum [ i ] = ar [ i ] + ( * min_element ( sum + i - 4 , sum + i ) ) ; 
        return * min_element ( sum + n - 4 , sum + n ) ; 
    } 
MINIMUM_SUM_SUBSEQUENCE_LEAST_ONE_EVERY_FOUR_CONSECUTIVE_ELEMENTS_PICKED_1() {}
};