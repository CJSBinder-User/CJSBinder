#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_FACTORIAL_NUMBERS_IN_A_GIVEN_RANGE {
public:
    int C_F_N_I_A_G_R_f_gold(int low, int high)
    { 
        int fact = 1 , x = 1 ; 
        while ( fact < low ) { 
            fact = fact * x ; 
            x ++ ; 
        } 
        int res = 0 ; 
        while ( fact <= high ) { 
            res ++ ; 
            fact = fact * x ; 
            x ++ ; 
        } 
        return res ; 
    } 
COUNT_FACTORIAL_NUMBERS_IN_A_GIVEN_RANGE() {}
};