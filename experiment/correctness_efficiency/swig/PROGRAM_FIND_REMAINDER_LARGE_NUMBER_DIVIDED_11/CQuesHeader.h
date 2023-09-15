#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_FIND_REMAINDER_LARGE_NUMBER_DIVIDED_11 {
public:
    int P_F_R_L_N_D_1_f_gold(string str)
    { 
        int len = str . length ( ) ; 
        int num , rem = 0 ; 
        for ( int i = 0 ; 
        i < len ; 
        i ++ ) { 
            num = rem * 10 + ( str [ i ] - '0' ) ; 
            rem = num % 11 ; 
        } 
        return rem ; 
    } 
PROGRAM_FIND_REMAINDER_LARGE_NUMBER_DIVIDED_11() {}
};