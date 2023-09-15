#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PAIRS_TWO_SORTED_ARRAYS_WHOSE_SUM_EQUAL_GIVEN_VALUE_X_1 {
public:
    int C_P_T_S_A_W_S_E_G_V_X_1_f_gold(int arr1 [], int arr2 [], int m, int n, int x)
    { 
        int count = 0 ; 
        unordered_set < int > us ; 
        for ( int i = 0 ; 
        i < m ; 
        i ++ ) us . insert ( arr1 [ i ] ) ; 
        for ( int j = 0 ; 
        j < n ; 
        j ++ ) if ( us . find ( x - arr2 [ j ] ) != us . end ( ) ) count ++ ; 
        return count ; 
    } 
COUNT_PAIRS_TWO_SORTED_ARRAYS_WHOSE_SUM_EQUAL_GIVEN_VALUE_X_1() {}
};