#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class TOTAL_NUMBER_OF_NON_DECREASING_NUMBERS_WITH_N_DIGITS_1 {
public:
    long long T_N_O_N_D_N_W_N_D_1_f_gold(int n)
    { 
        int N = 10 ; 
        long long count = 1 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) { 
            count *= ( N + i - 1 ) ; 
            count /= i ; 
        } 
        return count ; 
    } 
TOTAL_NUMBER_OF_NON_DECREASING_NUMBERS_WITH_N_DIGITS_1() {}
};