#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CEILING_IN_A_SORTED_ARRAY {
public:
    int C_I_A_S_A_f_gold(int arr [], int low, int high, int x)
    { 
        int i ; 
        if ( x <= arr [ low ] ) return low ; 
        for ( i = low ; 
        i < high ; 
        i ++ ) { 
            if ( arr [ i ] == x ) return i ; 
            if ( arr [ i ] < x && arr [ i + 1 ] >= x ) return i + 1 ; 
        } 
        return - 1 ; 
    } 
CEILING_IN_A_SORTED_ARRAY() {}
};