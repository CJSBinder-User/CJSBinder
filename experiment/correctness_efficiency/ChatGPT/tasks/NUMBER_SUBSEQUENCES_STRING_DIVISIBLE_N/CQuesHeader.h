#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_SUBSEQUENCES_STRING_DIVISIBLE_N {
public:
    int N_S_S_D_N_f_gold(string str, int n)
    { 
        int len = str . length ( ) ; 
        int dp [ len ] [ n ] ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        dp [ 0 ] [ ( str [ 0 ] - '0' ) % n ] ++ ; 
        for ( int i = 1 ; 
        i < len ; 
        i ++ ) { 
            dp [ i ] [ ( str [ i ] - '0' ) % n ] ++ ; 
            for ( int j = 0 ; 
            j < n ; 
            j ++ ) { 
                dp [ i ] [ j ] += dp [ i - 1 ] [ j ] ; 
                dp [ i ] [ ( j * 10 + ( str [ i ] - '0' ) ) % n ] += dp [ i - 1 ] [ j ] ; 
            } 
        } 
        return dp [ len - 1 ] [ 0 ] ; 
    } 
NUMBER_SUBSEQUENCES_STRING_DIVISIBLE_N() {}
};