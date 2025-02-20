#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_SUM_MODULO_K_FIRST_N_NATURAL_NUMBER_1 {
public:
    int F_S_M_K_F_N_N_N_1_f_gold(int N, int K)
    { 
        int ans = 0 ; 
        int y = N / K ; 
        int x = N % K ; 
        ans = ( K * ( K - 1 ) / 2 ) * y + ( x * ( x + 1 ) ) / 2 ; 
        return ans ; 
    } 
FIND_SUM_MODULO_K_FIRST_N_NATURAL_NUMBER_1() {}
};