#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_SUM_TWO_NUMBERS_FORMED_DIGITS_ARRAY {
public:
    int M_S_T_N_F_D_A_f_gold(int arr [], int n)
    { 
        sort ( arr , arr + n ) ; 
        int a = 0 , b = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( i & 1 ) a = a * 10 + arr [ i ] ; 
            else b = b * 10 + arr [ i ] ; 
        } 
        return a + b ; 
    } 
MINIMUM_SUM_TWO_NUMBERS_FORMED_DIGITS_ARRAY() {}
};