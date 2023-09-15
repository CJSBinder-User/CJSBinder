#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2 {
public:
    bool F_A_T_T_S_T_A_G_V_2_f_gold(int A [], int arr_size, int sum)
    { 
        for ( int i = 0 ; 
        i < arr_size - 2 ; 
        i ++ ) { 
            unordered_set < int > s ; 
            int curr_sum = sum - A [ i ] ; 
            for ( int j = i + 1 ; 
            j < arr_size ; 
            j ++ ) { 
                if ( s . find ( curr_sum - A [ j ] ) != s . end ( ) ) { 
                    printf ( "Triplet is %d, %d, %d" , A [ i ] , A [ j ] , curr_sum - A [ j ] ) ; 
                    return true ; 
                } 
                s . insert ( A [ j ] ) ; 
            } 
        } 
        return false ; 
    } 
FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2() {}
};