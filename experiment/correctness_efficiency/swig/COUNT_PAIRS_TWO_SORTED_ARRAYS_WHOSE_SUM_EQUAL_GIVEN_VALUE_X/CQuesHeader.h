#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PAIRS_TWO_SORTED_ARRAYS_WHOSE_SUM_EQUAL_GIVEN_VALUE_X {
public:
    int C_P_T_S_A_W_S_E_G_V_X_f_gold(int arr1 [], int arr2 [], int m, int n, int x)
    { 
        int count = 0 ; 
        for ( int i = 0 ; 
        i < m ; 
        i ++ ) for ( int j = 0 ; 
        j < n ; 
        j ++ ) if ( ( arr1 [ i ] + arr2 [ j ] ) == x ) count ++ ; 
        return count ; 
    } 
COUNT_PAIRS_TWO_SORTED_ARRAYS_WHOSE_SUM_EQUAL_GIVEN_VALUE_X() {}
};