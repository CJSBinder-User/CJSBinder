#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_MINIMUM_NUMBER_SUBSETS_SUBSEQUENCES_CONSECUTIVE_NUMBERS {
public:
    int C_M_N_S_S_C_N_f_gold(int arr [], int n)
    { 
        sort ( arr , arr + n ) ; 
        int count = 1 ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) { 
            if ( arr [ i ] + 1 != arr [ i + 1 ] ) count ++ ; 
        } 
        return count ; 
    } 
COUNT_MINIMUM_NUMBER_SUBSETS_SUBSEQUENCES_CONSECUTIVE_NUMBERS() {}
};