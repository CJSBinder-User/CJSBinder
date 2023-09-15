#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_STRINGS_ADJACENT_CHARACTERS_DIFFERENCE_ONE {
public:
    int C_S_A_C_D_O_f_gold(int n)
    { 
        long int dp [ n + 1 ] [ 27 ] ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        for ( int i = 0 ; 
        i <= 25 ; 
        i ++ ) dp [ 1 ] [ i ] = 1 ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j <= 25 ; 
            j ++ ) if ( j == 0 ) dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ] ; 
            else dp [ i ] [ j ] = ( dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ] ) ; 
        } 
        long int sum = 0 ; 
        for ( int i = 0 ; 
        i <= 25 ; 
        i ++ ) sum = ( sum + dp [ n ] [ i ] ) ; 
        return sum ; 
    } 
COUNT_STRINGS_ADJACENT_CHARACTERS_DIFFERENCE_ONE() {}
};