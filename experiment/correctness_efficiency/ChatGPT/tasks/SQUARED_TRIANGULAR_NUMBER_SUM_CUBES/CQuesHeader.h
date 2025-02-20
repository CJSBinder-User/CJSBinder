#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SQUARED_TRIANGULAR_NUMBER_SUM_CUBES {
public:
    int S_T_N_S_C_f_gold(int s)
    { 
        int sum = 0 ; 
        for ( int n = 1 ; 
        sum < s ; 
        n ++ ) { 
            sum += n * n * n ; 
            if ( sum == s ) return n ; 
        } 
        return - 1 ; 
    } 
SQUARED_TRIANGULAR_NUMBER_SUM_CUBES() {}
};