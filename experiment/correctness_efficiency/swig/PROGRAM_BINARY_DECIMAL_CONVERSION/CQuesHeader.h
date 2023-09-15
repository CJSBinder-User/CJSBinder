#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_BINARY_DECIMAL_CONVERSION {
public:
    int P_B_D_C_f_gold(int n)
    { 
        int num = n ; 
        int dec_value = 0 ; 
        int base = 1 ; 
        int temp = num ; 
        while ( temp ) { 
            int last_digit = temp % 10 ; 
            temp = temp / 10 ; 
            dec_value += last_digit * base ; 
            base = base * 2 ; 
        } 
        return dec_value ; 
    } 
PROGRAM_BINARY_DECIMAL_CONVERSION() {}
};