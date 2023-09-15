#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_POWER_OF_2_GREATER_THAN_OR_EQUAL_TO_N_2 {
public:
    unsigned int S_P_O_2_G_T_O_E_T_N_2_f_gold(unsigned int n)
    { 
        n -- ; 
        n |= n >> 1 ; 
        n |= n >> 2 ; 
        n |= n >> 4 ; 
        n |= n >> 8 ; 
        n |= n >> 16 ; 
        n ++ ; 
        return n ; 
    } 
SMALLEST_POWER_OF_2_GREATER_THAN_OR_EQUAL_TO_N_2() {}
};