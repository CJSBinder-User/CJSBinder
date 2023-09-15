#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class C_PROGRAM_FACTORIAL_NUMBER_2 {
public:
    int C_P_F_N_2_f_gold(int n)
    { 
        return ( n == 1 || n == 0 ) ? 1 : n * C_P_F_N_2_f_gold ( n - 1 ) ; 
    } 
C_PROGRAM_FACTORIAL_NUMBER_2() {}
};