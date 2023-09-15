#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_SUM_SUBSEQUENCE_LEAST_K_DISTANT_ELEMENTS {
public:
    int M_S_S_L_K_D_E_f_gold(int arr [], int N, int k)
    { 
        int MS [ N ] ; 
        MS [ N - 1 ] = arr [ N - 1 ] ; 
        for ( int i = N - 2 ; 
        i >= 0 ; 
        i -- ) { 
            if ( i + k + 1 >= N ) MS [ i ] = max ( arr [ i ] , MS [ i + 1 ] ) ; 
            else MS [ i ] = max ( arr [ i ] + MS [ i + k + 1 ] , MS [ i + 1 ] ) ; 
        } 
        return MS [ 0 ] ; 
    } 
MAXIMUM_SUM_SUBSEQUENCE_LEAST_K_DISTANT_ELEMENTS() {}
};