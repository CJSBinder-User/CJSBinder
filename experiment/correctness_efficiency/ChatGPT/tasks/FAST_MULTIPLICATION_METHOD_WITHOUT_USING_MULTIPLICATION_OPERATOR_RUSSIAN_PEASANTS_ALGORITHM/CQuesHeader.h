#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FAST_MULTIPLICATION_METHOD_WITHOUT_USING_MULTIPLICATION_OPERATOR_RUSSIAN_PEASANTS_ALGORITHM {
public:
    unsigned int F_M_M_W_U_M_O_R_P_A_f_gold(unsigned int a, unsigned int b)
    { 
        int res = 0 ; 
        while ( b > 0 ) { 
            if ( b & 1 ) res = res + a ; 
            a = a << 1 ; 
            b = b >> 1 ; 
        } 
        return res ; 
    } 
FAST_MULTIPLICATION_METHOD_WITHOUT_USING_MULTIPLICATION_OPERATOR_RUSSIAN_PEASANTS_ALGORITHM() {}
};