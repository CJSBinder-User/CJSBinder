#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_TRAILING_ZEROES_FACTORIAL_NUMBER {
public:
    int C_T_Z_F_N_f_gold(int n)
    { 
        int count = 0 ; 
        for ( int i = 5 ; 
        n / i >= 1 ; 
        i *= 5 ) count += n / i ; 
        return count ; 
    } 
COUNT_TRAILING_ZEROES_FACTORIAL_NUMBER() {}
};