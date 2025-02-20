#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_SUM_EVEN_INDEX_BINOMIAL_COEFFICIENTS {
public:
    int F_S_E_I_B_C_f_gold(int n)
    { 
        int C [ n + 1 ] [ n + 1 ] ; 
        int i , j ; 
        for ( i = 0 ; 
        i <= n ; 
        i ++ ) { 
            for ( j = 0 ; 
            j <= min ( i , n ) ; 
            j ++ ) { 
                if ( j == 0 || j == i ) C [ i ] [ j ] = 1 ; 
                else C [ i ] [ j ] = C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ; 
            } 
        } 
        int sum = 0 ; 
        for ( int i = 0 ; 
        i <= n ; 
        i += 2 ) sum += C [ n ] [ i ] ; 
        return sum ; 
    } 
FIND_SUM_EVEN_INDEX_BINOMIAL_COEFFICIENTS() {}
};