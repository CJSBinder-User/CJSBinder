#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_POWER_OF_2_GREATER_THAN_OR_EQUAL_TO_N_1 {
public:
    unsigned int S_P_O_2_G_T_O_E_T_N_1_f_gold(unsigned int n)
    { 
        unsigned int p = 1 ; 
        if ( n && ! ( n & ( n - 1 ) ) ) return n ; 
        while ( p < n ) p <<= 1 ; 
        return p ; 
    } 
SMALLEST_POWER_OF_2_GREATER_THAN_OR_EQUAL_TO_N_1() {}
};