#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class EULERS_CRITERION_CHECK_IF_SQUARE_ROOT_UNDER_MODULO_P_EXISTS {
public:
    bool E_C_C_I_S_R_U_M_P_E_f_gold(int n, int p)
    { 
        n = n % p ; 
        for ( int x = 2 ; 
        x < p ; 
        x ++ ) if ( ( x * x ) % p == n ) return true ; 
        return false ; 
    } 
EULERS_CRITERION_CHECK_IF_SQUARE_ROOT_UNDER_MODULO_P_EXISTS() {}
};