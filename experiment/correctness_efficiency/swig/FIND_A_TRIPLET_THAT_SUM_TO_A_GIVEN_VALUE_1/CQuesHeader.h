#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_1 {
public:
    bool F_A_T_T_S_T_A_G_V_1_f_gold(int A [], int arr_size, int sum)
    { 
        int l , r ; 
        sort ( A , A + arr_size ) ; 
        for ( int i = 0 ; 
        i < arr_size - 2 ; 
        i ++ ) { 
            l = i + 1 ; 
            r = arr_size - 1 ; 
            while ( l < r ) { 
                if ( A [ i ] + A [ l ] + A [ r ] == sum ) { 
                    printf ( "Triplet is %d, %d, %d" , A [ i ] , A [ l ] , A [ r ] ) ; 
                    return true ; 
                } 
                else if ( A [ i ] + A [ l ] + A [ r ] < sum ) l ++ ; 
                else r -- ; 
            } 
        } 
        return false ; 
    } 
FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_1() {}
};