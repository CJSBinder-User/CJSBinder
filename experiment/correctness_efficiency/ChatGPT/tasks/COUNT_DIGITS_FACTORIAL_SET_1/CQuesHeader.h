#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_DIGITS_FACTORIAL_SET_1 {
public:
    int C_D_F_S_1_f_gold(int n)
    { 
        if ( n < 0 ) return 0 ; 
        if ( n <= 1 ) return 1 ; 
        double digits = 0 ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) digits += log10 ( i ) ; 
        return floor ( digits ) + 1 ; 
    } 
COUNT_DIGITS_FACTORIAL_SET_1() {}
};