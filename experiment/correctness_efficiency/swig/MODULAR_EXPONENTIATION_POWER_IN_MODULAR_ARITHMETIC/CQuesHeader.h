#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MODULAR_EXPONENTIATION_POWER_IN_MODULAR_ARITHMETIC {
public:
    int M_E_P_I_M_A_f_gold(int x, unsigned int y, int p)
    { 
        int res = 1 ; 
        x = x % p ; 
        while ( y > 0 ) { 
            if ( y & 1 ) res = ( res * x ) % p ; 
            y = y >> 1 ; 
            x = ( x * x ) % p ; 
        } 
        return res ; 
    } 
MODULAR_EXPONENTIATION_POWER_IN_MODULAR_ARITHMETIC() {}
};