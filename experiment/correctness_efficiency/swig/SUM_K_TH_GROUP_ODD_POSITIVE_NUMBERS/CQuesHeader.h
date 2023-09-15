#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_K_TH_GROUP_ODD_POSITIVE_NUMBERS {
public:
    int S_K_T_G_O_P_N_f_gold(int k)
    { 
        int cur = ( k * ( k - 1 ) ) + 1 ; 
        int sum = 0 ; 
        while ( k -- ) { 
            sum += cur ; 
            cur += 2 ; 
        } 
        return sum ; 
    } 
SUM_K_TH_GROUP_ODD_POSITIVE_NUMBERS() {}
};