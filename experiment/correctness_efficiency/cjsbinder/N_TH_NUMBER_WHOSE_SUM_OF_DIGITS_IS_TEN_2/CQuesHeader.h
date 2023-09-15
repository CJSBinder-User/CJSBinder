#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class N_TH_NUMBER_WHOSE_SUM_OF_DIGITS_IS_TEN_2 {
public:
    int N_T_N_W_S_O_D_I_T_2_f_gold(int n)
    { 
        int nthElement = 19 + ( n - 1 ) * 9 ; 
        int outliersCount = ( int ) log10 ( nthElement ) - 1 ; 
        nthElement += 9 * outliersCount ; 
        return nthElement ; 
    } 
N_TH_NUMBER_WHOSE_SUM_OF_DIGITS_IS_TEN_2() {}
};