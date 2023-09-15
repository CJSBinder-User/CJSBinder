#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_INCREASING_SUBSEQUENCE_1 {
public:
    int L_I_S_1_f_gold(int arr [], int n)
    { 
        int L_I_S_1_f_gold [ n ] ; 
        L_I_S_1_f_gold [ 0 ] = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            L_I_S_1_f_gold [ i ] = 1 ; 
            for ( int j = 0 ; 
            j < i ; 
            j ++ ) if ( arr [ i ] > arr [ j ] && L_I_S_1_f_gold [ i ] < L_I_S_1_f_gold [ j ] + 1 ) L_I_S_1_f_gold [ i ] = L_I_S_1_f_gold [ j ] + 1 ; 
        } 
        return * max_element ( L_I_S_1_f_gold , L_I_S_1_f_gold + n ) ; 
    } 
LONGEST_INCREASING_SUBSEQUENCE_1() {}
};