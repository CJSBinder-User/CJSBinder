#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_BINOMIAL_COEFFICIENT_TERM_VALUE {
public:
    int M_B_C_T_V_f_gold(int n)
    { 
        int C [ n + 1 ] [ n + 1 ] ; 
        for ( int i = 0 ; 
        i <= n ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j <= min ( i , n ) ; 
            j ++ ) { 
                if ( j == 0 || j == i ) C [ i ] [ j ] = 1 ; 
                else C [ i ] [ j ] = C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ; 
            } 
        } 
        int maxvalue = 0 ; 
        for ( int i = 0 ; 
        i <= n ; 
        i ++ ) maxvalue = max ( maxvalue , C [ n ] [ i ] ) ; 
        return maxvalue ; 
    } 
MAXIMUM_BINOMIAL_COEFFICIENT_TERM_VALUE() {}
};