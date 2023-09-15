#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUBSET_SUM_DIVISIBLE_M {
public:
    bool S_S_D_M_f_gold(int arr [], int n, int m)
    { 
        if ( n > m ) return true ; 
        bool DP [ m ] ; 
        memset ( DP , false , m ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( DP [ 0 ] ) return true ; 
            bool temp [ m ] ; 
            memset ( temp , false , m ) ; 
            for ( int j = 0 ; 
            j < m ; 
            j ++ ) { 
                if ( DP [ j ] == true ) { 
                    if ( DP [ ( j + arr [ i ] ) % m ] == false ) temp [ ( j + arr [ i ] ) % m ] = true ; 
                } 
            } 
            for ( int j = 0 ; 
            j < m ; 
            j ++ ) if ( temp [ j ] ) DP [ j ] = true ; 
            DP [ arr [ i ] % m ] = true ; 
        } 
        return DP [ 0 ] ; 
    } 
SUBSET_SUM_DIVISIBLE_M() {}
};