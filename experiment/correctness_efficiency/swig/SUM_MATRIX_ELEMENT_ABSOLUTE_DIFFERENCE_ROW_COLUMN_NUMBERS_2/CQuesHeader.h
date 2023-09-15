#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_MATRIX_ELEMENT_ABSOLUTE_DIFFERENCE_ROW_COLUMN_NUMBERS_2 {
public:
    int S_M_E_A_D_R_C_N_2_f_gold(int n)
    { 
        n -- ; 
        int sum = 0 ; 
        sum += ( n * ( n + 1 ) ) / 2 ; 
        sum += ( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6 ; 
        return sum ; 
    } 
SUM_MATRIX_ELEMENT_ABSOLUTE_DIFFERENCE_ROW_COLUMN_NUMBERS_2() {}
};