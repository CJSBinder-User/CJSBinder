#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MINIMUM_SUM_FACTORS_NUMBER {
public:
    int F_M_S_F_N_f_gold(int num)
    { 
        int sum = 0 ; 
        for ( int i = 2 ; 
        i * i <= num ; 
        i ++ ) { 
            while ( num % i == 0 ) { 
                sum += i ; 
                num /= i ; 
            } 
        } 
        sum += num ; 
        return sum ; 
    } 
FIND_MINIMUM_SUM_FACTORS_NUMBER() {}
};