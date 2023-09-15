#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_WAYS_BUILD_STREET_GIVEN_CONSTRAINTS {
public:
    long C_W_B_S_G_C_f_gold(int n)
    { 
        long dp [ 2 ] [ n + 1 ] ; 
        dp [ 0 ] [ 1 ] = 1 ; 
        dp [ 1 ] [ 1 ] = 2 ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) { 
            dp [ 0 ] [ i ] = dp [ 0 ] [ i - 1 ] + dp [ 1 ] [ i - 1 ] ; 
            dp [ 1 ] [ i ] = dp [ 0 ] [ i - 1 ] * 2 + dp [ 1 ] [ i - 1 ] ; 
        } 
        return dp [ 0 ] [ n ] + dp [ 1 ] [ n ] ; 
    } 
COUNT_WAYS_BUILD_STREET_GIVEN_CONSTRAINTS() {}
};