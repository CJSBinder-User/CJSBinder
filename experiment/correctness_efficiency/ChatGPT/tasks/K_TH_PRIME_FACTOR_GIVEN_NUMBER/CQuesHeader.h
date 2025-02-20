#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class K_TH_PRIME_FACTOR_GIVEN_NUMBER {
public:
    int K_T_P_F_G_N_f_gold(int n, int k)
    { 
        while ( n % 2 == 0 ) { 
            k -- ; 
            n = n / 2 ; 
            if ( k == 0 ) return 2 ; 
        } 
        for ( int i = 3 ; 
        i <= sqrt ( n ) ; 
        i = i + 2 ) { 
            while ( n % i == 0 ) { 
                if ( k == 1 ) return i ; 
                k -- ; 
                n = n / i ; 
            } 
        } 
        if ( n > 2 && k == 1 ) return n ; 
        return - 1 ; 
    } 
K_TH_PRIME_FACTOR_GIVEN_NUMBER() {}
};