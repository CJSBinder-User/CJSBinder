#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MULTIPLY_LARGE_INTEGERS_UNDER_LARGE_MODULO {
public:
    long long M_L_I_U_L_M_f_gold(long long a, long long b, long long mod)
    { 
        long long res = 0 ; 
        a %= mod ; 
        while ( b ) { 
            if ( b & 1 ) res = ( res + a ) % mod ; 
            a = ( 2 * a ) % mod ; 
            b >>= 1 ; 
        } 
        return res ; 
    } 
MULTIPLY_LARGE_INTEGERS_UNDER_LARGE_MODULO() {}
};