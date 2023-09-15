#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LENGTH_LONGEST_BALANCED_SUBSEQUENCE {
public:
    int L_L_B_S_f_gold(string s, int n)
    { 
        int dp [ n ] [ n ] ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) if ( s [ i ] == '(' && s [ i + 1 ] == ')' ) dp [ i ] [ i + 1 ] = 2 ; 
        for ( int l = 2 ; 
        l < n ; 
        l ++ ) { 
            for ( int i = 0 , j = l ; 
            j < n ; 
            i ++ , j ++ ) { 
                if ( s [ i ] == '(' && s [ j ] == ')' ) dp [ i ] [ j ] = 2 + dp [ i + 1 ] [ j - 1 ] ; 
                for ( int k = i ; 
                k < j ; 
                k ++ ) dp [ i ] [ j ] = max ( dp [ i ] [ j ] , dp [ i ] [ k ] + dp [ k + 1 ] [ j ] ) ; 
            } 
        } 
        return dp [ 0 ] [ n - 1 ] ; 
    } 
LENGTH_LONGEST_BALANCED_SUBSEQUENCE() {}
};
