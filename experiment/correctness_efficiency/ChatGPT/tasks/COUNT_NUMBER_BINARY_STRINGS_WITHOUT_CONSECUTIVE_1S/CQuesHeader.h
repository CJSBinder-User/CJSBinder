#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBER_BINARY_STRINGS_WITHOUT_CONSECUTIVE_1S {
public:
    int C_N_B_S_W_C_1_f_gold(int n)
    { 
        int a [ n ] , b [ n ] ; 
        a [ 0 ] = b [ 0 ] = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            a [ i ] = a [ i - 1 ] + b [ i - 1 ] ; 
            b [ i ] = a [ i - 1 ] ; 
        } 
        return a [ n - 1 ] + b [ n - 1 ] ; 
    } 
COUNT_NUMBER_BINARY_STRINGS_WITHOUT_CONSECUTIVE_1S() {}
};