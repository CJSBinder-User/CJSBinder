#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CONVERT_DECIMAL_FRACTION_BINARY_NUMBER {
public:
    string C_D_F_B_N_f_gold(double num, int k_prec)
    { 
        string binary = "" ; 
        int Integral = num ; 
        double fractional = num - Integral ; 
        while ( Integral ) { 
            int rem = Integral % 2 ; 
            binary . push_back ( rem + '0' ) ; 
            Integral /= 2 ; 
        } 
        reverse ( binary . begin ( ) , binary . end ( ) ) ; 
        binary . push_back ( '.' ) ; 
        while ( k_prec -- ) { 
            fractional *= 2 ; 
            int fract_bit = fractional ; 
            if ( fract_bit == 1 ) { 
                fractional -= fract_bit ; 
                binary . push_back ( 1 + '0' ) ; 
            } 
            else binary . push_back ( 0 + '0' ) ; 
        } 
        return binary ; 
    } 
CONVERT_DECIMAL_FRACTION_BINARY_NUMBER() {}
};