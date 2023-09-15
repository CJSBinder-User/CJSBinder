#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PALINDROME_SUB_STRINGS_STRING {
public:
    int C_P_S_S_S_f_gold(char str [], int n)
    { 
        int dp [ n ] [ n ] ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        bool P [ n ] [ n ] ; 
        memset ( P , false , sizeof ( P ) ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) P [ i ] [ i ] = true ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) { 
            if ( str [ i ] == str [ i + 1 ] ) { 
                P [ i ] [ i + 1 ] = true ; 
                dp [ i ] [ i + 1 ] = 1 ; 
            } 
        } 
        for ( int gap = 2 ; 
        gap < n ; 
        gap ++ ) { 
            for ( int i = 0 ; 
            i < n - gap ; 
            i ++ ) { 
                int j = gap + i ; 
                if ( str [ i ] == str [ j ] && P [ i + 1 ] [ j - 1 ] ) P [ i ] [ j ] = true ; 
                if ( P [ i ] [ j ] == true ) dp [ i ] [ j ] = dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] + 1 - dp [ i + 1 ] [ j - 1 ] ; 
                else dp [ i ] [ j ] = dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] ; 
            } 
        } 
        return dp [ 0 ] [ n - 1 ] ; 
    } 
COUNT_PALINDROME_SUB_STRINGS_STRING() {}
};