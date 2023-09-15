#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_FIRST_NATURAL_NUMBER_WHOSE_FACTORIAL_DIVISIBLE_X {
public:
    int F_F_N_N_W_F_D_X_f_gold(int x)
    { 
        int i = 1 ; 
        int fact = 1 ; 
        for ( i = 1 ; 
        i < x ; 
        i ++ ) { 
            fact = fact * i ; 
            if ( fact % x == 0 ) break ; 
        } 
        return i ; 
    } 
FIND_FIRST_NATURAL_NUMBER_WHOSE_FACTORIAL_DIVISIBLE_X() {}
};