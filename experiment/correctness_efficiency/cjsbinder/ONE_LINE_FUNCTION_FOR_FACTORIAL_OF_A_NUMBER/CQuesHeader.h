#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class ONE_LINE_FUNCTION_FOR_FACTORIAL_OF_A_NUMBER {
public:
    int O_L_F_F_F_O_A_N_f_gold(int n)
    { 
        return ( n == 1 || n == 0 ) ? 1 : n * O_L_F_F_F_O_A_N_f_gold ( n - 1 ) ; 
    } 
ONE_LINE_FUNCTION_FOR_FACTORIAL_OF_A_NUMBER() {}
};