#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_CHECK_ARRAY_SORTED_NOT_ITERATIVE_RECURSIVE {
public:
    int P_C_A_S_N_I_R_f_gold(int arr [], int n)
    { 
        if ( n == 1 || n == 0 ) return 1 ; 
        if ( arr [ n - 1 ] < arr [ n - 2 ] ) return 0 ; 
        return P_C_A_S_N_I_R_f_gold ( arr , n - 1 ) ; 
    } 
PROGRAM_CHECK_ARRAY_SORTED_NOT_ITERATIVE_RECURSIVE() {}
};