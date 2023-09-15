#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_FOR_FACTORIAL_OF_A_NUMBER {
public:
    unsigned int P_F_F_O_A_N_f_gold(unsigned int n)
    { 
        if ( n == 0 ) return 1 ; 
        return n * P_F_F_O_A_N_f_gold ( n - 1 ) ; 
    } 
PROGRAM_FOR_FACTORIAL_OF_A_NUMBER() {}
};