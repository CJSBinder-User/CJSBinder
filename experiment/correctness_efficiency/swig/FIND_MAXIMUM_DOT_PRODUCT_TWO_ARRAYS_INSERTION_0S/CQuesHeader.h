#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MAXIMUM_DOT_PRODUCT_TWO_ARRAYS_INSERTION_0S {
public:
    long long F_M_D_P_T_A_I_0_f_gold(int A [], int B [], int m, int n)
    { 
        long long int dp [ n + 1 ] [ m + 1 ] ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) for ( int j = i ; 
        j <= m ; 
        j ++ ) dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ) , dp [ i ] [ j - 1 ] ) ; 
        return dp [ n ] [ m ] ; 
    } 
FIND_MAXIMUM_DOT_PRODUCT_TWO_ARRAYS_INSERTION_0S() {}
};