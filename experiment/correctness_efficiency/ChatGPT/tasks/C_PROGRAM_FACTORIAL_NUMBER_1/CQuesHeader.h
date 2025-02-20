#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class C_PROGRAM_FACTORIAL_NUMBER_1 {
public:
    unsigned int C_P_F_N_1_f_gold(unsigned int n)
    { 
        int res = 1 , i ; 
        for ( i = 2 ; 
        i <= n ; 
        i ++ ) res *= i ; 
        return res ; 
    } 
C_PROGRAM_FACTORIAL_NUMBER_1() {}
};