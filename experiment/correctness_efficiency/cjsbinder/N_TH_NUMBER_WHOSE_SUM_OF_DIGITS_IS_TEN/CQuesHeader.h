#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class N_TH_NUMBER_WHOSE_SUM_OF_DIGITS_IS_TEN {
public:
    int N_T_N_W_S_O_D_I_T_f_gold(int n)
    { 
        int count = 0 ; 
        for ( int curr = 1 ; 
        ; 
        curr ++ ) { 
            int sum = 0 ; 
            for ( int x = curr ; 
            x > 0 ; 
            x = x / 10 ) sum = sum + x % 10 ; 
            if ( sum == 10 ) count ++ ; 
            if ( count == n ) return curr ; 
        } 
        return - 1 ; 
    } 
N_TH_NUMBER_WHOSE_SUM_OF_DIGITS_IS_TEN() {}
};