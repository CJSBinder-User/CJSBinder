#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_MATRIX_ELEMENT_ELEMENT_INTEGER_DIVISION_ROW_COLUMN_1 {
public:
    int S_M_E_E_I_D_R_C_1_f_gold(int n)
    { 
        int ans = 0 , temp = 0 , num ; 
        for ( int i = 1 ; 
        i <= n && temp < n ; 
        i ++ ) { 
            temp = i - 1 ; 
            num = 1 ; 
            while ( temp < n ) { 
                if ( temp + i <= n ) ans += ( i * num ) ; 
                else ans += ( ( n - temp ) * num ) ; 
                temp += i ; 
                num ++ ; 
            } 
        } 
        return ans ; 
    } 
SUM_MATRIX_ELEMENT_ELEMENT_INTEGER_DIVISION_ROW_COLUMN_1() {}
};