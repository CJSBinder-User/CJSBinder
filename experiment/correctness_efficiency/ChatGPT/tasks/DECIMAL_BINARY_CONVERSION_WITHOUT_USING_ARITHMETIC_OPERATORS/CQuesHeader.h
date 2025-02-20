#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DECIMAL_BINARY_CONVERSION_WITHOUT_USING_ARITHMETIC_OPERATORS {
public:
    string D_B_C_W_U_A_O_f_gold(int n)
    { 
        if ( n == 0 ) return "0" ; 
        string bin = "" ; 
        while ( n > 0 ) { 
            bin = ( ( n & 1 ) == 0 ? '0' : '1' ) + bin ; 
            n >>= 1 ; 
        } 
        return bin ; 
    } 
DECIMAL_BINARY_CONVERSION_WITHOUT_USING_ARITHMETIC_OPERATORS() {}
};