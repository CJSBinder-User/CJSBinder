#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COST_BALANCE_PARANTHESES {
public:
    int C_B_P_f_gold(string s)
    { 
        if ( s . length ( ) == 0 ) cout << 0 << endl ; 
        int ans = 0 ; 
        int o = 0 , c = 0 ; 
        for ( int i = 0 ; 
        i < s . length ( ) ; 
        i ++ ) { 
            if ( s [ i ] == '(' ) o ++ ; 
            if ( s [ i ] == ')' ) c ++ ; 
        } 
        if ( o != c ) return - 1 ; 
        int a [ s . size ( ) ] ; 
        if ( s [ 0 ] == '(' ) a [ 0 ] = 1 ; 
        else a [ 0 ] = - 1 ; 
        if ( a [ 0 ] < 0 ) ans += abs ( a [ 0 ] ) ; 
        for ( int i = 1 ; 
        i < s . length ( ) ; 
        i ++ ) { 
            if ( s [ i ] == '(' ) a [ i ] = a [ i - 1 ] + 1 ; 
            else a [ i ] = a [ i - 1 ] - 1 ; 
            if ( a [ i ] < 0 ) ans += abs ( a [ i ] ) ; 
        } 
        return ans ; 
    } 
COST_BALANCE_PARANTHESES() {}
};