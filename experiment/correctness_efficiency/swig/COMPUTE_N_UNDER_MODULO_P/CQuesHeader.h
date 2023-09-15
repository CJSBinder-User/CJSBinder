#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COMPUTE_N_UNDER_MODULO_P {
public:
    int C_N_U_M_P_f_gold(int n, int p)
    { 
        if ( n >= p ) return 0 ; 
        int result = 1 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) result = ( result * i ) % p ; 
        return result ; 
    } 
COMPUTE_N_UNDER_MODULO_P() {}
};