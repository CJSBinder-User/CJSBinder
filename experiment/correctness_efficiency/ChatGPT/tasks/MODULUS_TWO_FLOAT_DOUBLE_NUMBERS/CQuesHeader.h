#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MODULUS_TWO_FLOAT_DOUBLE_NUMBERS {
public:
    double M_T_F_D_N_f_gold(double a, double b)
    { 
        double mod ; 
        if ( a < 0 ) mod = - a ; 
        else mod = a ; 
        if ( b < 0 ) b = - b ; 
        while ( mod >= b ) mod = mod - b ; 
        if ( a < 0 ) return - mod ; 
        return mod ; 
    } 
MODULUS_TWO_FLOAT_DOUBLE_NUMBERS() {}
};