#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_COST_FOR_ACQUIRING_ALL_COINS_WITH_K_EXTRA_COINS_ALLOWED_WITH_EVERY_COIN {
public:
    int M_C_F_A_A_C_W_K_E_C_A_W_E_C_f_gold(int coin [], int n, int k)
    { 
        sort ( coin , coin + n ) ; 
        int coins_needed = ceil ( 1.0 * n / ( k + 1 ) ) ; 
        int ans = 0 ; 
        for ( int i = 0 ; 
        i <= coins_needed - 1 ; 
        i ++ ) ans += coin [ i ] ; 
        return ans ; 
    } 
MINIMUM_COST_FOR_ACQUIRING_ALL_COINS_WITH_K_EXTRA_COINS_ALLOWED_WITH_EVERY_COIN() {}
};