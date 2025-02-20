#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_INDEX_PAIRS_EQUAL_ELEMENTS_ARRAY {
public:
    int C_I_P_E_E_A_f_gold(int arr [], int n)
    { 
        int ans = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = i + 1 ; 
        j < n ; 
        j ++ ) if ( arr [ i ] == arr [ j ] ) ans ++ ; 
        return ans ; 
    } 
COUNT_INDEX_PAIRS_EQUAL_ELEMENTS_ARRAY() {}
};