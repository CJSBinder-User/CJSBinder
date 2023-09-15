#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_1 {
public:
    long long S_O_A_E_U_T_N_R_I_A_P_T_1_f_gold(int n)
    { 
        long long int sum = 0 ; 
        sum = 1 << n ; 
        return ( sum - 1 ) ; 
    } 
SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_1() {}
};