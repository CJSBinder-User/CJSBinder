#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_LARGEST_PRIME_FACTOR_NUMBER_LESS_EQUAL_N {
public:
    int S_L_P_F_N_L_E_N_f_gold(int n)
    { 
        int prime [ n + 1 ] , sum = 0 ; 
        memset ( prime , 0 , sizeof ( prime ) ) ; 
        int max = n / 2 ; 
        for ( int p = 2 ; 
        p <= max ; 
        p ++ ) { 
            if ( prime [ p ] == 0 ) { 
                for ( int i = p * 2 ; 
                i <= n ; 
                i += p ) prime [ i ] = p ; 
            } 
        } 
        for ( int p = 2 ; 
        p <= n ; 
        p ++ ) { 
            if ( prime [ p ] ) sum += prime [ p ] ; 
            else sum += p ; 
        } 
        return sum ; 
    } 
SUM_LARGEST_PRIME_FACTOR_NUMBER_LESS_EQUAL_N() {}
};