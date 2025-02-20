#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_CHECK_ARRAY_SORTED_NOT_ITERATIVE_RECURSIVE_1 {
public:
    bool P_C_A_S_N_I_R_1_f_gold(int arr [], int n)
    { 
        if ( n == 0 || n == 1 ) return true ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) if ( arr [ i - 1 ] > arr [ i ] ) return false ; 
        return true ; 
    } 
PROGRAM_CHECK_ARRAY_SORTED_NOT_ITERATIVE_RECURSIVE_1() {}
};