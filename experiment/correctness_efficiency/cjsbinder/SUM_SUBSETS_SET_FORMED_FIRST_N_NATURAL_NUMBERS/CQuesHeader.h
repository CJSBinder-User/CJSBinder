#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_SUBSETS_SET_FORMED_FIRST_N_NATURAL_NUMBERS {
public:
    unsigned long long S_S_S_F_F_N_N_N_f_gold(int n)
    { 
        return ( n * ( n + 1 ) / 2 ) * ( 1 << ( n - 1 ) ) ; 
    } 
SUM_SUBSETS_SET_FORMED_FIRST_N_NATURAL_NUMBERS() {}
};