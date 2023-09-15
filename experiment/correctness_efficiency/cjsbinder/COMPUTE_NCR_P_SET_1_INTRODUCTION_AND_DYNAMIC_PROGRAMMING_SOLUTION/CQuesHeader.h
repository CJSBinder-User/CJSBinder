#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COMPUTE_NCR_P_SET_1_INTRODUCTION_AND_DYNAMIC_PROGRAMMING_SOLUTION {
public:
    int C_N_P_S_1_I_A_D_P_S_f_gold(int n, int r, int p)
    { 
        int C [ r + 1 ] ; 
        memset ( C , 0 , sizeof ( C ) ) ; 
        C [ 0 ] = 1 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) { 
            for ( int j = min ( i , r ) ; 
            j > 0 ; 
            j -- ) C [ j ] = ( C [ j ] + C [ j - 1 ] ) % p ; 
        } 
        return C [ r ] ; 
    } 
COMPUTE_NCR_P_SET_1_INTRODUCTION_AND_DYNAMIC_PROGRAMMING_SOLUTION() {}
};