#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_DIGITS_PRODUCT_TWO_NUMBERS_1 {
public:
    int N_D_P_T_N_1_f_gold(int a, int b)
    { 
        if ( a == 0 || b == 0 ) return 1 ; 
        return floor ( log10 ( abs ( a ) ) + log10 ( abs ( b ) ) ) + 1 ; 
    } 
NUMBER_DIGITS_PRODUCT_TWO_NUMBERS_1() {}
};