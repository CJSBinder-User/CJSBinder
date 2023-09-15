#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_NUMBER_IS_PERFECT_SQUARE_USING_ADDITIONSUBTRACTION {
public:
    bool C_N_I_P_S_U_A_f_gold(int n)
    { 
        for ( int sum = 0 , i = 1 ; 
        sum < n ; 
        i += 2 ) { 
            sum += i ; 
            if ( sum == n ) return true ; 
        } 
        return false ; 
    } 
CHECK_NUMBER_IS_PERFECT_SQUARE_USING_ADDITIONSUBTRACTION() {}
};