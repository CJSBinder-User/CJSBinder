#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_INVERSIONS_OF_SIZE_THREE_IN_A_GIVE_ARRAY {
public:
    int C_I_O_S_T_I_A_G_A_f_gold(int arr [], int n)
    { 
        int invcount = 0 ; 
        for ( int i = 0 ; 
        i < n - 2 ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < n - 1 ; 
            j ++ ) { 
                if ( arr [ i ] > arr [ j ] ) { 
                    for ( int k = j + 1 ; 
                    k < n ; 
                    k ++ ) { 
                        if ( arr [ j ] > arr [ k ] ) invcount ++ ; 
                    } 
                } 
            } 
        } 
        return invcount ; 
    } 
COUNT_INVERSIONS_OF_SIZE_THREE_IN_A_GIVE_ARRAY() {}
};