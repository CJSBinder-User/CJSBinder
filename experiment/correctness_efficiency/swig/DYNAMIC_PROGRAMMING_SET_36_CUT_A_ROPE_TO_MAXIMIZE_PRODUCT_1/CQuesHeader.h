#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_36_CUT_A_ROPE_TO_MAXIMIZE_PRODUCT_1 {
public:
    int D_P_S_3_C_A_R_T_M_P_1_f_gold(int n)
    { 
        if ( n == 2 || n == 3 ) return ( n - 1 ) ; 
        int res = 1 ; 
        while ( n > 4 ) { 
            n -= 3 ; 
            res *= 3 ; 
        } 
        return ( n * res ) ; 
    } 
DYNAMIC_PROGRAMMING_SET_36_CUT_A_ROPE_TO_MAXIMIZE_PRODUCT_1() {}
};