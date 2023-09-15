#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class HOW_TO_CHECK_IF_A_GIVEN_ARRAY_REPRESENTS_A_BINARY_HEAP_1 {
public:
    bool H_T_C_I_A_G_A_R_A_B_H_1_f_gold(int arr [], int n)
    { 
        for ( int i = 0 ; 
        i <= ( n - 2 ) / 2 ; 
        i ++ ) { 
            if ( arr [ 2 * i + 1 ] > arr [ i ] ) return false ; 
            if ( 2 * i + 2 < n && arr [ 2 * i + 2 ] > arr [ i ] ) return false ; 
        } 
        return true ; 
    } 
HOW_TO_CHECK_IF_A_GIVEN_ARRAY_REPRESENTS_A_BINARY_HEAP_1() {}
};