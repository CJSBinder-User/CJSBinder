#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_8_MATRIX_CHAIN_MULTIPLICATION {
public:
    int D_P_S_8_M_C_M_f_gold(int p [], int i, int j)
    { 
        if ( i == j ) return 0 ; 
        int k ; 
        int min = INT_MAX ; 
        int count ; 
        for ( k = i ; 
        k < j ; 
        k ++ ) { 
            count = D_P_S_8_M_C_M_f_gold ( p , i , k ) + D_P_S_8_M_C_M_f_gold ( p , k + 1 , j ) + p [ i - 1 ] * p [ k ] * p [ j ] ; 
            if ( count < min ) min = count ; 
        } 
        return min ; 
    } 
DYNAMIC_PROGRAMMING_SET_8_MATRIX_CHAIN_MULTIPLICATION() {}
};