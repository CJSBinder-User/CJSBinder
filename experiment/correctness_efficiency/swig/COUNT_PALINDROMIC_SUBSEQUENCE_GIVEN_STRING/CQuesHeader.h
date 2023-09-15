#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PALINDROMIC_SUBSEQUENCE_GIVEN_STRING {
public:
    int C_P_S_G_S_f_gold(string str)
    { 
        int N = str . length ( ) ; 
        int cps [ N + 1 ] [ N + 1 ] ; 
        memset ( cps , 0 , sizeof ( cps ) ) ; 
        for ( int i = 0 ; 
        i < N ; 
        i ++ ) cps [ i ] [ i ] = 1 ; 
        for ( int L = 2 ; 
        L <= N ; 
        L ++ ) { 
            for ( int i = 0 ; 
            i < N ; 
            i ++ ) { 
                int k = L + i - 1 ; 
                if ( str [ i ] == str [ k ] ) cps [ i ] [ k ] = cps [ i ] [ k - 1 ] + cps [ i + 1 ] [ k ] + 1 ; 
                else cps [ i ] [ k ] = cps [ i ] [ k - 1 ] + cps [ i + 1 ] [ k ] - cps [ i + 1 ] [ k - 1 ] ; 
            } 
        } 
        return cps [ 0 ] [ N - 1 ] ; 
    } 
COUNT_PALINDROMIC_SUBSEQUENCE_GIVEN_STRING() {}
};