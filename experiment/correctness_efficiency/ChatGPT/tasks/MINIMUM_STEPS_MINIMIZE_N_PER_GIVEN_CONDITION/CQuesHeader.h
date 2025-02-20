#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_STEPS_MINIMIZE_N_PER_GIVEN_CONDITION {
public:
    int M_S_M_N_P_G_C_f_gold(int n)
    { 
        int table [ n + 1 ] ; 
        for ( int i = 0 ; 
        i <= n ; 
        i ++ ) table [ i ] = n - i ; 
        for ( int i = n ; 
        i >= 1 ; 
        i -- ) { 
            if ( ! ( i % 2 ) ) table [ i / 2 ] = min ( table [ i ] + 1 , table [ i / 2 ] ) ; 
            if ( ! ( i % 3 ) ) table [ i / 3 ] = min ( table [ i ] + 1 , table [ i / 3 ] ) ; 
        } 
        return table [ 1 ] ; 
    } 
MINIMUM_STEPS_MINIMIZE_N_PER_GIVEN_CONDITION() {}
};