#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_MATRIX_ELEMENT_ABSOLUTE_DIFFERENCE_ROW_COLUMN_NUMBERS {
public:
    int S_M_E_A_D_R_C_N_f_gold(int n)
    { 
        int arr [ n ] [ n ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = 0 ; 
        j < n ; 
        j ++ ) arr [ i ] [ j ] = abs ( i - j ) ; 
        int sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = 0 ; 
        j < n ; 
        j ++ ) sum += arr [ i ] [ j ] ; 
        return sum ; 
    } 
SUM_MATRIX_ELEMENT_ABSOLUTE_DIFFERENCE_ROW_COLUMN_NUMBERS() {}
};