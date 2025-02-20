#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_PAIR_WITH_GREATEST_PRODUCT_IN_ARRAY {
public:
    int F_P_W_G_P_I_A_f_gold(int arr [], int n)
    { 
        int result = - 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = 0 ; 
        j < n - 1 ; 
        j ++ ) for ( int k = j + 1 ; 
        k < n ; 
        k ++ ) if ( arr [ j ] * arr [ k ] == arr [ i ] ) result = max ( result , arr [ i ] ) ; 
        return result ; 
    } 
FIND_PAIR_WITH_GREATEST_PRODUCT_IN_ARRAY() {}
};