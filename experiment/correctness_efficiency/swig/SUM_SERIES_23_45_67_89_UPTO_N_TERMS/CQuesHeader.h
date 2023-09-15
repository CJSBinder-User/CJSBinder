#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_SERIES_23_45_67_89_UPTO_N_TERMS {
public:
    double S_S_2_4_6_8_U_N_T_f_gold(int n)
    { 
        int i = 1 ; 
        double res = 0.0 ; 
        bool sign = true ; 
        while ( n > 0 ) { 
            n -- ; 
            if ( sign ) { 
                sign = ! sign ; 
                res = res + ( double ) ++ i / ++ i ; 
            } 
            else { 
                sign = ! sign ; 
                res = res - ( double ) ++ i / ++ i ; 
            } 
        } 
        return res ; 
    } 
SUM_SERIES_23_45_67_89_UPTO_N_TERMS() {}
};