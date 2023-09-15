#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_3_LONGEST_INCREASING_SUBSEQUENCE_1 {
public:
    int D_P_S_3_L_I_S_1_f_gold(int arr [], int n)
    { 
        int D_P_S_3_L_I_S_1_f_gold [ n ] ; 
        D_P_S_3_L_I_S_1_f_gold [ 0 ] = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            D_P_S_3_L_I_S_1_f_gold [ i ] = 1 ; 
            for ( int j = 0 ; 
            j < i ; 
            j ++ ) if ( arr [ i ] > arr [ j ] && D_P_S_3_L_I_S_1_f_gold [ i ] < D_P_S_3_L_I_S_1_f_gold [ j ] + 1 ) D_P_S_3_L_I_S_1_f_gold [ i ] = D_P_S_3_L_I_S_1_f_gold [ j ] + 1 ; 
        } 
        return * max_element ( D_P_S_3_L_I_S_1_f_gold , D_P_S_3_L_I_S_1_f_gold + n ) ; 
    } 
DYNAMIC_PROGRAMMING_SET_3_LONGEST_INCREASING_SUBSEQUENCE_1() {}
};