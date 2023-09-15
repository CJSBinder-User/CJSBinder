#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_NUMBER_OF_SQUARES_WHOSE_SUM_EQUALS_TO_GIVEN_NUMBER_N_1 {
public:
    int M_N_O_S_W_S_E_T_G_N_N_1_f_gold(int n)
    { 
        int * dp = new int [ n + 1 ] ; 
        dp [ 0 ] = 0 ; 
        dp [ 1 ] = 1 ; 
        dp [ 2 ] = 2 ; 
        dp [ 3 ] = 3 ; 
        for ( int i = 4 ; 
        i <= n ; 
        i ++ ) { 
            dp [ i ] = i ; 
            for ( int x = 1 ; 
            x <= ceil ( sqrt ( i ) ) ; 
            x ++ ) { 
                int temp = x * x ; 
                if ( temp > i ) break ; 
                else dp [ i ] = min ( dp [ i ] , 1 + dp [ i - temp ] ) ; 
            } 
        } 
        int res = dp [ n ] ; 
        delete [ ] dp ; 
        return res ; 
    } 
MINIMUM_NUMBER_OF_SQUARES_WHOSE_SUM_EQUALS_TO_GIVEN_NUMBER_N_1() {}
};