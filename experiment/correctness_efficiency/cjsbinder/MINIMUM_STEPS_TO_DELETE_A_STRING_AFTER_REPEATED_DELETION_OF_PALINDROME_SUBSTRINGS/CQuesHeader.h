#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_STEPS_TO_DELETE_A_STRING_AFTER_REPEATED_DELETION_OF_PALINDROME_SUBSTRINGS {
public:
    int M_S_T_D_A_S_A_R_D_O_P_S_f_gold(string str)
    { 
        int N = str . length ( ) ; 
        int dp [ N + 1 ] [ N + 1 ] ; 
        for ( int i = 0 ; 
        i <= N ; 
        i ++ ) for ( int j = 0 ; 
        j <= N ; 
        j ++ ) dp [ i ] [ j ] = 0 ; 
        for ( int len = 1 ; 
        len <= N ; 
        len ++ ) { 
            for ( int i = 0 , j = len - 1 ; 
            j < N ; 
            i ++ , j ++ ) { 
                if ( len == 1 ) dp [ i ] [ j ] = 1 ; 
                else { 
                    dp [ i ] [ j ] = 1 + dp [ i + 1 ] [ j ] ; 
                    if ( str [ i ] == str [ i + 1 ] ) dp [ i ] [ j ] = min ( 1 + dp [ i + 2 ] [ j ] , dp [ i ] [ j ] ) ; 
                    for ( int K = i + 2 ; 
                    K <= j ; 
                    K ++ ) if ( str [ i ] == str [ K ] ) dp [ i ] [ j ] = min ( dp [ i + 1 ] [ K - 1 ] + dp [ K + 1 ] [ j ] , dp [ i ] [ j ] ) ; 
                } 
            } 
        } 
        return dp [ 0 ] [ N - 1 ] ; 
    } 
MINIMUM_STEPS_TO_DELETE_A_STRING_AFTER_REPEATED_DELETION_OF_PALINDROME_SUBSTRINGS() {}
};