#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class N_TH_NUMBER_WHOSE_SUM_OF_DIGITS_IS_TEN_1 {
public:
    int N_T_N_W_S_O_D_I_T_1_f_gold(int n)
    { 
        int count = 0 ; 
        for ( int curr = 19 ; 
        ; 
        curr += 9 ) { 
            int sum = 0 ; 
            for ( int x = curr ; 
            x > 0 ; 
            x = x / 10 ) sum = sum + x % 10 ; 
            if ( sum == 10 ) count ++ ; 
            if ( count == n ) return curr ; 
        } 
        return - 1 ; 
    } 
N_TH_NUMBER_WHOSE_SUM_OF_DIGITS_IS_TEN_1() {}
};