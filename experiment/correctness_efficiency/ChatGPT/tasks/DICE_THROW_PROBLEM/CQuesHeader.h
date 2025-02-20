#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DICE_THROW_PROBLEM {
public:
    int D_T_P_f_gold(int m, int n, int x)
    { 
        int table [ n + 1 ] [ x + 1 ] ; 
        memset ( table , 0 , sizeof ( table ) ) ; 
        for ( int j = 1 ; 
        j <= m && j <= x ; 
        j ++ ) table [ 1 ] [ j ] = 1 ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) for ( int j = 1 ; 
        j <= x ; 
        j ++ ) for ( int k = 1 ; 
        k <= m && k < j ; 
        k ++ ) table [ i ] [ j ] += table [ i - 1 ] [ j - k ] ; 
        return table [ n ] [ x ] ; 
    } 
DICE_THROW_PROBLEM() {}
};