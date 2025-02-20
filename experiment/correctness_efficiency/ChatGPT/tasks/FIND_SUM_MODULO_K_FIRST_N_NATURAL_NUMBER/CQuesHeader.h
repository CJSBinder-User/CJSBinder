#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_SUM_MODULO_K_FIRST_N_NATURAL_NUMBER {
public:
    int F_S_M_K_F_N_N_N_f_gold(int N, int K)
    { 
        int ans = 0 ; 
        for ( int i = 1 ; 
        i <= N ; 
        i ++ ) ans += ( i % K ) ; 
        return ans ; 
    } 
FIND_SUM_MODULO_K_FIRST_N_NATURAL_NUMBER() {}
};