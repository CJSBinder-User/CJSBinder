#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_DIGITS_PRODUCT_TWO_NUMBERS {
public:
    int N_D_P_T_N_f_gold(int a, int b)
    { 
        int count = 0 ; 
        int p = abs ( a * b ) ; 
        if ( p == 0 ) return 1 ; 
        while ( p > 0 ) { 
            count ++ ; 
            p = p / 10 ; 
        } 
        return count ; 
    } 
NUMBER_DIGITS_PRODUCT_TWO_NUMBERS() {}
};