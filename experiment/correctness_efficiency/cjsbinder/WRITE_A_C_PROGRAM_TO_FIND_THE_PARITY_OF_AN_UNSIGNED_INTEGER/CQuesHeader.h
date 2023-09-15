#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class WRITE_A_C_PROGRAM_TO_FIND_THE_PARITY_OF_AN_UNSIGNED_INTEGER {
public:
    bool W_A_C_P_T_F_T_P_O_A_U_I_f_gold(unsigned int n)
    { 
        bool parity = 0 ; 
        while ( n ) { 
            parity = ! parity ; 
            n = n & ( n - 1 ) ; 
        } 
        return parity ; 
    } 
WRITE_A_C_PROGRAM_TO_FIND_THE_PARITY_OF_AN_UNSIGNED_INTEGER() {}
};