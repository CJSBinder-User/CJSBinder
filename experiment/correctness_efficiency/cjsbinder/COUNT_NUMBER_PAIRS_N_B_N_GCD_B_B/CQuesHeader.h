#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBER_PAIRS_N_B_N_GCD_B_B {
public:
    int C_N_P_N_B_N_G_B_B_f_gold(int n)
    { 
        int k = n ; 
        int imin = 1 ; 
        int ans = 0 ; 
        while ( imin <= n ) { 
            int imax = n / k ; 
            ans += k * ( imax - imin + 1 ) ; 
            imin = imax + 1 ; 
            k = n / imin ; 
        } 
        return ans ; 
    } 
COUNT_NUMBER_PAIRS_N_B_N_GCD_B_B() {}
};