#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DIFFERENT_WAYS_SUM_N_USING_NUMBERS_GREATER_EQUAL_M {
public:
    int D_W_S_N_U_N_G_E_M_f_gold(int n, int m)
    { 
        int dp [ n + 2 ] [ n + 2 ] ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        dp [ 0 ] [ n + 1 ] = 1 ; 
        for ( int k = n ; 
        k >= m ; 
        k -- ) { 
            for ( int i = 0 ; 
            i <= n ; 
            i ++ ) { 
                dp [ i ] [ k ] = dp [ i ] [ k + 1 ] ; 
                if ( i - k >= 0 && i - k <= n + 1 ) dp [ i ] [ k ] = ( dp [ i ] [ k ] + dp [ i - k ] [ k ] ) ; 
            } 
        } 
        return dp [ n ] [ m ] ; 
    } 
DIFFERENT_WAYS_SUM_N_USING_NUMBERS_GREATER_EQUAL_M() {}
};