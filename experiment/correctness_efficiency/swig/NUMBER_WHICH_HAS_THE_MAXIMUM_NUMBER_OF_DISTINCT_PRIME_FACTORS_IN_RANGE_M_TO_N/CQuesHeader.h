#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_WHICH_HAS_THE_MAXIMUM_NUMBER_OF_DISTINCT_PRIME_FACTORS_IN_RANGE_M_TO_N {
public:
    int N_W_H_T_M_N_O_D_P_F_I_R_M_T_N_f_gold(int m, int n)
    { 
        long long factorCount [ n + 1 ] ; 
        bool prime [ n + 1 ] ; 
        for ( int i = 0 ; 
        i <= n ; 
        i ++ ) { 
            factorCount [ i ] = 0 ; 
            prime [ i ] = true ; 
        } 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) { 
            if ( prime [ i ] == true ) { 
                factorCount [ i ] = 1 ; 
                for ( int j = i * 2 ; 
                j <= n ; 
                j += i ) { 
                    factorCount [ j ] ++ ; 
                    prime [ j ] = false ; 
                } 
            } 
        } 
        int max = factorCount [ m ] ; 
        int num = m ; 
        for ( int i = m ; 
        i <= n ; 
        i ++ ) { 
            if ( factorCount [ i ] > max ) { 
                max = factorCount [ i ] ; 
                num = i ; 
            } 
        } 
        return num ; 
    } 
NUMBER_WHICH_HAS_THE_MAXIMUM_NUMBER_OF_DISTINCT_PRIME_FACTORS_IN_RANGE_M_TO_N() {}
};