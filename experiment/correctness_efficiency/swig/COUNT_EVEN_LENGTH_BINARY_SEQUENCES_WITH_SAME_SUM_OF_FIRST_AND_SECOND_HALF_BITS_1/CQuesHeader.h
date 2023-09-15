#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1 {
public:
    int C_E_L_B_S_W_S_S_O_F_A_S_H_B_1_f_gold(int n)
    { 
        int nCr = 1 , res = 1 ; 
        for ( int r = 1 ; 
        r <= n ; 
        r ++ ) { 
            nCr = ( nCr * ( n + 1 - r ) ) / r ; 
            res += nCr * nCr ; 
        } 
        return res ; 
    } 
COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1() {}
};