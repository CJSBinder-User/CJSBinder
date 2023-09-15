#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FINDING_POWER_PRIME_NUMBER_P_N_1 {
public:
    int F_P_P_N_P_N_1_f_gold(int n, int p)
    { 
        int ans = 0 ; 
        int temp = p ; 
        while ( temp <= n ) { 
            ans += n / temp ; 
            temp = temp * p ; 
        } 
        return ans ; 
    } 
FINDING_POWER_PRIME_NUMBER_P_N_1() {}
};