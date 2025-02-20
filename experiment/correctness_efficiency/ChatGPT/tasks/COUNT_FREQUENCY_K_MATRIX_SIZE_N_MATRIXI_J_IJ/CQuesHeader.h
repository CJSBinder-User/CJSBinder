#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_FREQUENCY_K_MATRIX_SIZE_N_MATRIXI_J_IJ {
public:
    int C_F_K_M_S_N_M_J_I_f_gold(int n, int k)
    { 
        if ( n + 1 >= k ) return ( k - 1 ) ; 
        else return ( 2 * n + 1 - k ) ; 
    } 
COUNT_FREQUENCY_K_MATRIX_SIZE_N_MATRIXI_J_IJ() {}
};