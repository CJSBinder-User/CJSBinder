#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUBSEQUENCES_SIZE_THREE_ARRAY_WHOSE_SUM_DIVISIBLE_M {
public:
    int S_S_T_A_W_S_D_M_f_gold(int A [], int N, int M)
    { 
        int sum = 0 ; 
        int ans = 0 ; 
        for ( int i = 0 ; 
        i < N ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < N ; 
            j ++ ) { 
                for ( int k = j + 1 ; 
                k < N ; 
                k ++ ) { 
                    sum = A [ i ] + A [ j ] + A [ k ] ; 
                    if ( sum % M == 0 ) ans ++ ; 
                } 
            } 
        } 
        return ans ; 
    } 
SUBSEQUENCES_SIZE_THREE_ARRAY_WHOSE_SUM_DIVISIBLE_M() {}
};