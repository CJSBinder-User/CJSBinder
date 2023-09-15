#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE {
public:
    long long S_O_A_E_U_T_N_R_I_A_P_T_f_gold(int n)
    { 
        long long int sum = 0 ; 
        for ( int row = 0 ; 
        row < n ; 
        row ++ ) { 
            sum = sum + ( 1 << row ) ; 
        } 
        return sum ; 
    } 
SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE() {}
};