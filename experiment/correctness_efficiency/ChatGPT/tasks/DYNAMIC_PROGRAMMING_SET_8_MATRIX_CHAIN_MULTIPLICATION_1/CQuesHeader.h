#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_8_MATRIX_CHAIN_MULTIPLICATION_1 {
public:
    int D_P_S_8_M_C_M_1_f_gold(int p [], int n)
    { 
        int m [ n ] [ n ] ; 
        int i , j , k , L , q ; 
        for ( i = 1 ; 
        i < n ; 
        i ++ ) m [ i ] [ i ] = 0 ; 
        for ( L = 2 ; 
        L < n ; 
        L ++ ) { 
            for ( i = 1 ; 
            i < n - L + 1 ; 
            i ++ ) { 
                j = i + L - 1 ; 
                m [ i ] [ j ] = INT_MAX ; 
                for ( k = i ; 
                k <= j - 1 ; 
                k ++ ) { 
                    q = m [ i ] [ k ] + m [ k + 1 ] [ j ] + p [ i - 1 ] * p [ k ] * p [ j ] ; 
                    if ( q < m [ i ] [ j ] ) m [ i ] [ j ] = q ; 
                } 
            } 
        } 
        return m [ 1 ] [ n - 1 ] ; 
    } 
DYNAMIC_PROGRAMMING_SET_8_MATRIX_CHAIN_MULTIPLICATION_1() {}
};