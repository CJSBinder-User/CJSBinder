#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COMPUTE_MODULUS_DIVISION_BY_A_POWER_OF_2_NUMBER {
public:
    unsigned int C_M_D_B_A_P_O_2_N_f_gold(unsigned int n, unsigned int d)
    { 
        return ( n & ( d - 1 ) ) ; 
    } 
COMPUTE_MODULUS_DIVISION_BY_A_POWER_OF_2_NUMBER() {}
};