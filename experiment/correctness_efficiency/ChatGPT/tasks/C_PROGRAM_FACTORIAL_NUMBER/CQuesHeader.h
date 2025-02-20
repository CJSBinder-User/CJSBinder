#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class C_PROGRAM_FACTORIAL_NUMBER {
public:
    unsigned int C_P_F_N_f_gold(unsigned int n)
    { 
        if ( n == 0 ) return 1 ; 
        return n * C_P_F_N_f_gold ( n - 1 ) ; 
    } 
C_PROGRAM_FACTORIAL_NUMBER() {}
};