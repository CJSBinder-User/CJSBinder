#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_TRIPLET_SUM_ARRAY {
public:
    int M_T_S_A_f_gold(int arr [], int n)
    { 
        int sum = INT_MIN ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = i + 1 ; 
        j < n ; 
        j ++ ) for ( int k = j + 1 ; 
        k < n ; 
        k ++ ) if ( sum < arr [ i ] + arr [ j ] + arr [ k ] ) sum = arr [ i ] + arr [ j ] + arr [ k ] ; 
        return sum ; 
    } 
MAXIMUM_TRIPLET_SUM_ARRAY() {}
};