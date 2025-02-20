#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PAIRS_WHOSE_PRODUCTS_EXIST_IN_ARRAY {
public:
    int C_P_W_P_E_I_A_f_gold(int arr [], int n)
    { 
        int result = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < n ; 
            j ++ ) { 
                int product = arr [ i ] * arr [ j ] ; 
                for ( int k = 0 ; 
                k < n ; 
                k ++ ) { 
                    if ( arr [ k ] == product ) { 
                        result ++ ; 
                        break ; 
                    } 
                } 
            } 
        } 
        return result ; 
    } 
COUNT_PAIRS_WHOSE_PRODUCTS_EXIST_IN_ARRAY() {}
};