#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_FOR_FACTORIAL_OF_A_NUMBER_2 {
public:
    int P_F_F_O_A_N_2_f_gold(int n)
    { 
        return ( n == 1 || n == 0 ) ? 1 : n * P_F_F_O_A_N_2_f_gold ( n - 1 ) ; 
    } 
PROGRAM_FOR_FACTORIAL_OF_A_NUMBER_2() {}
};