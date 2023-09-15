#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class ADD_TWO_NUMBERS_WITHOUT_USING_ARITHMETIC_OPERATORS {
public:
    int A_T_N_W_U_A_O_f_gold(int x, int y)
    { 
        while ( y != 0 ) { 
            int carry = x & y ; 
            x = x ^ y ; 
            y = carry << 1 ; 
        } 
        return x ; 
    } 
ADD_TWO_NUMBERS_WITHOUT_USING_ARITHMETIC_OPERATORS() {}
};