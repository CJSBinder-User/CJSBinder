#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_SUM_OF_DIGITS_IN_NUMBERS_FROM_1_TO_N {
public:
    int C_S_O_D_I_N_F_1_T_N_f_gold(int n)
    { 
        if ( n < 10 ) return n * ( n + 1 ) / 2 ; 
        int d = log10 ( n ) ; 
        int * a = new int [ d + 1 ] ; 
        a [ 0 ] = 0 , a [ 1 ] = 45 ; 
        for ( int i = 2 ; 
        i <= d ; 
        i ++ ) a [ i ] = a [ i - 1 ] * 10 + 45 * ceil ( pow ( 10 , i - 1 ) ) ; 
        int p = ceil ( pow ( 10 , d ) ) ; 
        int msd = n / p ; 
        return msd * a [ d ] + ( msd * ( msd - 1 ) / 2 ) * p + msd * ( 1 + n % p ) + C_S_O_D_I_N_F_1_T_N_f_gold ( n % p ) ; 
    } 
COUNT_SUM_OF_DIGITS_IN_NUMBERS_FROM_1_TO_N() {}
};