#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_INVERSIONS_OF_SIZE_THREE_IN_A_GIVE_ARRAY_1 {
public:
    int C_I_O_S_T_I_A_G_A_1_f_gold(int arr [], int n)
    { 
        int invcount = 0 ; 
        for ( int i = 1 ; 
        i < n - 1 ; 
        i ++ ) { 
            int small = 0 ; 
            for ( int j = i + 1 ; 
            j < n ; 
            j ++ ) if ( arr [ i ] > arr [ j ] ) small ++ ; 
            int great = 0 ; 
            for ( int j = i - 1 ; 
            j >= 0 ; 
            j -- ) if ( arr [ i ] < arr [ j ] ) great ++ ; 
            invcount += great * small ; 
        } 
        return invcount ; 
    } 
COUNT_INVERSIONS_OF_SIZE_THREE_IN_A_GIVE_ARRAY_1() {}
};