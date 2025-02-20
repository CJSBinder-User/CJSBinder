#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class HOW_TO_PRINT_MAXIMUM_NUMBER_OF_A_USING_GIVEN_FOUR_KEYS {
public:
    int H_T_P_M_N_O_A_U_G_F_K_f_gold(int N)
    { 
        if ( N <= 6 ) return N ; 
        int screen [ N ] ; 
        int b ; 
        int n ; 
        for ( n = 1 ; 
        n <= 6 ; 
        n ++ ) screen [ n - 1 ] = n ; 
        for ( n = 7 ; 
        n <= N ; 
        n ++ ) { 
            screen [ n - 1 ] = max ( 2 * screen [ n - 4 ] , max ( 3 * screen [ n - 5 ] , 4 * screen [ n - 6 ] ) ) ; 
        } 
        return screen [ N - 1 ] ; 
    } 
HOW_TO_PRINT_MAXIMUM_NUMBER_OF_A_USING_GIVEN_FOUR_KEYS() {}
};