#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_MATRIX_ELEMENT_ELEMENT_INTEGER_DIVISION_ROW_COLUMN {
public:
    int S_M_E_E_I_D_R_C_f_gold(int n)
    { 
        int ans = 0 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) for ( int j = 1 ; 
        j <= n ; 
        j ++ ) ans += ( i / j ) ; 
        return ans ; 
    } 
SUM_MATRIX_ELEMENT_ELEMENT_INTEGER_DIVISION_ROW_COLUMN() {}
};