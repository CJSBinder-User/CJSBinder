#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_ROTATION_COUNT_ROTATED_SORTED_ARRAY {
public:
    int F_R_C_R_S_A_f_gold(int arr [], int n)
    { 
        int min = arr [ 0 ] , min_index = -1; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( min > arr [ i ] ) { 
                min = arr [ i ] ; 
                min_index = i ; 
            } 
        } 
        return min_index ; 
    } 
FIND_ROTATION_COUNT_ROTATED_SORTED_ARRAY() {}
};