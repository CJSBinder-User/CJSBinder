#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_LARGE_NUMBER_DIVISIBLE_3_NOT {
public:
    int C_L_N_D_3_N_f_gold(string str)
    { 
        int n = str . length ( ) ; 
        int digitSum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) digitSum += ( str [ i ] - '0' ) ; 
        return ( digitSum % 3 == 0 ) ; 
    } 
CHECK_LARGE_NUMBER_DIVISIBLE_3_NOT() {}
};