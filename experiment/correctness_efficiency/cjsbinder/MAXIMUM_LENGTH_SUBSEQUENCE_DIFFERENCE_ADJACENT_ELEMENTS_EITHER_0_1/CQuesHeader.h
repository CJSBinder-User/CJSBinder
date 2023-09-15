#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_LENGTH_SUBSEQUENCE_DIFFERENCE_ADJACENT_ELEMENTS_EITHER_0_1 {
public:
    int M_L_S_D_A_E_E_0_1_f_gold(int arr [], int n)
    { 
        int mls [ n ] , max = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) mls [ i ] = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) for ( int j = 0 ; 
        j < i ; 
        j ++ ) if ( abs ( arr [ i ] - arr [ j ] ) <= 1 && mls [ i ] < mls [ j ] + 1 ) mls [ i ] = mls [ j ] + 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( max < mls [ i ] ) max = mls [ i ] ; 
        return max ; 
    } 
MAXIMUM_LENGTH_SUBSEQUENCE_DIFFERENCE_ADJACENT_ELEMENTS_EITHER_0_1() {}
};