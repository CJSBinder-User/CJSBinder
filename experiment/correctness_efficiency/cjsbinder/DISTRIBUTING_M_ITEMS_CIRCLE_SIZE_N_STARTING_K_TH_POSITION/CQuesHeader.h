#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DISTRIBUTING_M_ITEMS_CIRCLE_SIZE_N_STARTING_K_TH_POSITION {
public:
    int D_M_I_C_S_N_S_K_T_P_f_gold(int n, int m, int k)
    { 
        if ( m <= n - k + 1 ) return m + k - 1 ; 
        m = m - ( n - k + 1 ) ; 
        return ( m % n == 0 ) ? n : ( m % n ) ; 
    } 
DISTRIBUTING_M_ITEMS_CIRCLE_SIZE_N_STARTING_K_TH_POSITION() {}
};