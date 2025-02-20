#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PAIRS_DIFFERENCE_EQUAL_K {
public:
    int C_P_D_E_K_f_gold(int arr [], int n, int k)
    { 
        int count = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < n ; 
            j ++ ) if ( arr [ i ] - arr [ j ] == k || arr [ j ] - arr [ i ] == k ) count ++ ; 
        } 
        return count ; 
    } 
COUNT_PAIRS_DIFFERENCE_EQUAL_K() {}
};