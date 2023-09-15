#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_COMMON_INCREASING_SUBSEQUENCE_LCS_LIS {
public:
    int L_C_I_S_L_L_f_gold(int arr1 [], int n, int arr2 [], int m)
    { 
        int table [ m ] ; 
        for ( int j = 0 ; 
        j < m ; 
        j ++ ) table [ j ] = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int current = 0 ; 
            for ( int j = 0 ; 
            j < m ; 
            j ++ ) { 
                if ( arr1 [ i ] == arr2 [ j ] ) if ( current + 1 > table [ j ] ) table [ j ] = current + 1 ; 
                if ( arr1 [ i ] > arr2 [ j ] ) if ( table [ j ] > current ) current = table [ j ] ; 
            } 
        } 
        int result = 0 ; 
        for ( int i = 0 ; 
        i < m ; 
        i ++ ) if ( table [ i ] > result ) result = table [ i ] ; 
        return result ; 
    } 
LONGEST_COMMON_INCREASING_SUBSEQUENCE_LCS_LIS() {}
};