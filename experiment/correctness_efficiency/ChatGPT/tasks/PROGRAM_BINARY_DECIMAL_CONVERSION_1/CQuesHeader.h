#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_BINARY_DECIMAL_CONVERSION_1 {
public:
    int P_B_D_C_1_f_gold(string n)
    { 
        string num = n ; 
        int dec_value = 0 ; 
        int base = 1 ; 
        int len = num . length ( ) ; 
        for ( int i = len - 1 ; 
        i >= 0 ; 
        i -- ) { 
            if ( num [ i ] == '1' ) dec_value += base ; 
            base = base * 2 ; 
        } 
        return dec_value ; 
    } 
PROGRAM_BINARY_DECIMAL_CONVERSION_1() {}
};