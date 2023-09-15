#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FLOOR_IN_A_SORTED_ARRAY {
public:
    int F_I_A_S_A_f_gold(int arr [], int n, int x)
    { 
        if ( x >= arr [ n - 1 ] ) return n - 1 ; 
        if ( x < arr [ 0 ] ) return - 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) if ( arr [ i ] > x ) return ( i - 1 ) ; 
        return - 1 ; 
    } 
FLOOR_IN_A_SORTED_ARRAY() {}
};