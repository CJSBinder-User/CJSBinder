#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_INSERTIONS_SORT_ARRAY {
public:
    int M_I_S_A_f_gold(int arr [], int N)
    { 
        int lis [ N ] ; 
        for ( int i = 0 ; 
        i < N ; 
        i ++ ) lis [ i ] = 1 ; 
        for ( int i = 1 ; 
        i < N ; 
        i ++ ) for ( int j = 0 ; 
        j < i ; 
        j ++ ) if ( arr [ i ] >= arr [ j ] && lis [ i ] < lis [ j ] + 1 ) lis [ i ] = lis [ j ] + 1 ; 
        int max = 0 ; 
        for ( int i = 0 ; 
        i < N ; 
        i ++ ) if ( max < lis [ i ] ) max = lis [ i ] ; 
        return ( N - max ) ; 
    } 
MINIMUM_INSERTIONS_SORT_ARRAY() {}
};