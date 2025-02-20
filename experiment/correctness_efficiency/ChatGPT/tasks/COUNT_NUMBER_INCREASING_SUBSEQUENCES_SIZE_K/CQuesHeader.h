#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBER_INCREASING_SUBSEQUENCES_SIZE_K {
public:
    int C_N_I_S_S_K_f_gold(int arr [], int n, int k)
    { 
        int dp [ k ] [ n ] , sum = 0 ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) dp [ 0 ] [ i ] = 1 ; 
        for ( int l = 1 ; 
        l < k ; 
        l ++ ) { 
            for ( int i = l ; 
            i < n ; 
            i ++ ) { 
                dp [ l ] [ i ] = 0 ; 
                for ( int j = l - 1 ; 
                j < i ; 
                j ++ ) { 
                    if ( arr [ j ] < arr [ i ] ) dp [ l ] [ i ] += dp [ l - 1 ] [ j ] ; 
                } 
            } 
        } 
        for ( int i = k - 1 ; 
        i < n ; 
        i ++ ) sum += dp [ k - 1 ] [ i ] ; 
        return sum ; 
    } 
COUNT_NUMBER_INCREASING_SUBSEQUENCES_SIZE_K() {}
};