#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_IS_DIVISIBLE_BY_29_OR_NOT {
public:
    bool N_I_D_B_2_O_N_f_gold(long long n)
    { 
        while ( n / 100 ) { 
            int last_digit = n % 10 ; 
            n /= 10 ; 
            n += last_digit * 3 ; 
        } 
        return ( n % 29 == 0 ) ; 
    } 
NUMBER_IS_DIVISIBLE_BY_29_OR_NOT() {}
};