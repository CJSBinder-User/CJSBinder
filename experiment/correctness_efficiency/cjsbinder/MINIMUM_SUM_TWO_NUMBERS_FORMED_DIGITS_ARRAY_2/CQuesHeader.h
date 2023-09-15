#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_SUM_TWO_NUMBERS_FORMED_DIGITS_ARRAY_2 {
public:
    int M_S_T_N_F_D_A_2_f_gold(int a [], int n)
    { 
        sort ( a , a + n ) ; 
        int num1 = 0 ; 
        int num2 = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( i % 2 == 0 ) num1 = num1 * 10 + a [ i ] ; 
            else num2 = num2 * 10 + a [ i ] ; 
        } 
        return num2 + num1 ; 
    } 
MINIMUM_SUM_TWO_NUMBERS_FORMED_DIGITS_ARRAY_2() {}
};