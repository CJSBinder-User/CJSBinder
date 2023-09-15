#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PAIRS_WHOSE_PRODUCTS_EXIST_IN_ARRAY_1 {
public:
    int C_P_W_P_E_I_A_1_f_gold(int arr [], int n)
    { 
        int result = 0 ; 
        set < int > Hash ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) Hash . insert ( arr [ i ] ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < n ; 
            j ++ ) { 
                int product = arr [ i ] * arr [ j ] ; 
                if ( Hash . find ( product ) != Hash . end ( ) ) result ++ ; 
            } 
        } 
        return result ; 
    } 
COUNT_PAIRS_WHOSE_PRODUCTS_EXIST_IN_ARRAY_1() {}
};