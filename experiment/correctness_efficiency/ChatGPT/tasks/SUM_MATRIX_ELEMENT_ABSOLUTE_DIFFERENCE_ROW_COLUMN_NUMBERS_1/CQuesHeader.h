#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_MATRIX_ELEMENT_ABSOLUTE_DIFFERENCE_ROW_COLUMN_NUMBERS_1 {
public:
    int S_M_E_A_D_R_C_N_1_f_gold(int n)
    { 
        int sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) sum += i * ( n - i ) ; 
        return 2 * sum ; 
    } 
SUM_MATRIX_ELEMENT_ABSOLUTE_DIFFERENCE_ROW_COLUMN_NUMBERS_1() {}
};