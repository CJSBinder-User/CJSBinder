#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PAIRS_TWO_SORTED_ARRAYS_WHOSE_SUM_EQUAL_GIVEN_VALUE_X_2 {
public:
    int C_P_T_S_A_W_S_E_G_V_X_2_f_gold(int arr1 [], int arr2 [], int m, int n, int x)
    { 
        int count = 0 ; 
        int l = 0 , r = n - 1 ; 
        while ( l < m && r >= 0 ) { 
            if ( ( arr1 [ l ] + arr2 [ r ] ) == x ) { 
                l ++ ; 
                r -- ; 
                count ++ ; 
            } 
            else if ( ( arr1 [ l ] + arr2 [ r ] ) < x ) l ++ ; 
            else r -- ; 
        } 
        return count ; 
    } 
COUNT_PAIRS_TWO_SORTED_ARRAYS_WHOSE_SUM_EQUAL_GIVEN_VALUE_X_2() {}
};