#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_WAYS_DIVIDE_CIRCLE_USING_N_NON_INTERSECTING_CHORDS {
public:
    int C_W_D_C_U_N_N_I_C_f_gold(int A)
    { 
        int n = 2 * A ; 
        int dpArray [ n + 1 ] = { 
            0 } 
        ; 
        dpArray [ 0 ] = 1 ; 
        dpArray [ 2 ] = 1 ; 
        for ( int i = 4 ; 
        i <= n ; 
        i += 2 ) { 
            for ( int j = 0 ; 
            j < i - 1 ; 
            j += 2 ) { 
                dpArray [ i ] += ( dpArray [ j ] * dpArray [ i - 2 - j ] ) ; 
            } 
        } 
        return dpArray [ n ] ; 
    } 
COUNT_WAYS_DIVIDE_CIRCLE_USING_N_NON_INTERSECTING_CHORDS() {}
};