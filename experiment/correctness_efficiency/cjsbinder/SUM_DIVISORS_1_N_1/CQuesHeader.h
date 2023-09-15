#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_DIVISORS_1_N_1 {
public:
    int S_D_1_N_1_f_gold(int n)
    { 
        int sum = 0 ; 
        for ( int i = 1 ; 
        i <= n ; 
        ++ i ) sum += ( n / i ) * i ; 
        return sum ; 
    } 
SUM_DIVISORS_1_N_1() {}
};