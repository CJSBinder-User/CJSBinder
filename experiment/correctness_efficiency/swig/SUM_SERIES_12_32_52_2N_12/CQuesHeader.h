#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_SERIES_12_32_52_2N_12 {
public:
    int S_S_1_3_5_2_1_f_gold(int n)
    { 
        int sum = 0 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) sum = sum + ( 2 * i - 1 ) * ( 2 * i - 1 ) ; 
        return sum ; 
    } 
SUM_SERIES_12_32_52_2N_12() {}
};