#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_DIGITS_FACTORIAL_SET_2 {
public:
    long long C_D_F_S_2_f_gold(int n)
    { 
        if ( n < 0 ) return 0 ; 
        if ( n <= 1 ) return 1 ; 
        double x = ( ( n * log10 ( n / M_E ) + log10 ( 2 * M_PI * n ) / 2.0 ) ) ; 
        return floor ( x ) + 1 ; 
    } 
COUNT_DIGITS_FACTORIAL_SET_2() {}
};