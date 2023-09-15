#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_FOR_FACTORIAL_OF_A_NUMBER_1 {
public:
    unsigned int P_F_F_O_A_N_1_f_gold(unsigned int n)
    { 
        int res = 1 , i ; 
        for ( i = 2 ; 
        i <= n ; 
        i ++ ) res *= i ; 
        return res ; 
    } 
PROGRAM_FOR_FACTORIAL_OF_A_NUMBER_1() {}
};