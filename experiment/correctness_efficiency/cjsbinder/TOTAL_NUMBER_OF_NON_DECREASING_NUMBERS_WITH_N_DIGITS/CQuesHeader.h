#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class TOTAL_NUMBER_OF_NON_DECREASING_NUMBERS_WITH_N_DIGITS {
public:
    long long T_N_O_N_D_N_W_N_D_f_gold(int n)
    { 
        long long int dp [ 10 ] [ n + 1 ] ; 
        memset ( dp , 0 , sizeof dp ) ; 
        for ( int i = 0 ; 
        i < 10 ; 
        i ++ ) dp [ i ] [ 1 ] = 1 ; 
        for ( int digit = 0 ; 
        digit <= 9 ; 
        digit ++ ) { 
            for ( int len = 2 ; 
            len <= n ; 
            len ++ ) { 
                for ( int x = 0 ; 
                x <= digit ; 
                x ++ ) dp [ digit ] [ len ] += dp [ x ] [ len - 1 ] ; 
            } 
        } 
        long long int count = 0 ; 
        for ( int i = 0 ; 
        i < 10 ; 
        i ++ ) count += dp [ i ] [ n ] ; 
        return count ; 
    } 
TOTAL_NUMBER_OF_NON_DECREASING_NUMBERS_WITH_N_DIGITS() {}
};