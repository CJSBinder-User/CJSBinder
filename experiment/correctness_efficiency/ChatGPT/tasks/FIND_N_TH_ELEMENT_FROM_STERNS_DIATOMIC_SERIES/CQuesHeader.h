#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES {
public:
    int F_N_T_E_F_S_D_S_f_gold(int n)
    { 
        int DP [ n + 1 ] ; 
        DP [ 0 ] = 0 ; 
        DP [ 1 ] = 1 ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) { 
            if ( i % 2 == 0 ) DP [ i ] = DP [ i / 2 ] ; 
            else DP [ i ] = DP [ ( i - 1 ) / 2 ] + DP [ ( i + 1 ) / 2 ] ; 
        } 
        return DP [ n ] ; 
    } 
FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES() {}
};