#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_LARGE_NUMBER_DIVISIBLE_11_NOT {
public:
    int C_L_N_D_1_N_f_gold(string str)
    { 
        int n = str . length ( ) ; 
        int oddDigSum = 0 , evenDigSum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( i % 2 == 0 ) oddDigSum += ( str [ i ] - '0' ) ; 
            else evenDigSum += ( str [ i ] - '0' ) ; 
        } 
        return ( ( oddDigSum - evenDigSum ) % 11 == 0 ) ; 
    } 
CHECK_LARGE_NUMBER_DIVISIBLE_11_NOT() {}
};