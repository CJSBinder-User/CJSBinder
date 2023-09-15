#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class TRIANGULAR_NUMBERS {
public:
    bool T_N_f_gold(int num)
    { 
        if ( num < 0 ) return false ; 
        int sum = 0 ; 
        for ( int n = 1 ; 
        sum <= num ; 
        n ++ ) { 
            sum = sum + n ; 
            if ( sum == num ) return true ; 
        } 
        return false ; 
    } 
TRIANGULAR_NUMBERS() {}
};