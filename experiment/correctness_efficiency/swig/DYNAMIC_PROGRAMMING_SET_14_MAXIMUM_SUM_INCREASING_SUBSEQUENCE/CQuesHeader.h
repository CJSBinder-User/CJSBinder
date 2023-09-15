#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_14_MAXIMUM_SUM_INCREASING_SUBSEQUENCE {
public:
    int D_P_S_1_M_S_I_S_f_gold(int arr [], int n)
    { 
        int i , j , max = 0 ; 
        int msis [ n ] ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) msis [ i ] = arr [ i ] ; 
        for ( i = 1 ; 
        i < n ; 
        i ++ ) for ( j = 0 ; 
        j < i ; 
        j ++ ) if ( arr [ i ] > arr [ j ] && msis [ i ] < msis [ j ] + arr [ i ] ) msis [ i ] = msis [ j ] + arr [ i ] ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) if ( max < msis [ i ] ) max = msis [ i ] ; 
        return max ; 
    } 
DYNAMIC_PROGRAMMING_SET_14_MAXIMUM_SUM_INCREASING_SUBSEQUENCE() {}
};