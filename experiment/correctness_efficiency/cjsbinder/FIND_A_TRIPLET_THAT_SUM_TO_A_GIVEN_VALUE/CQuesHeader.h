#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE {
public:
    bool F_A_T_T_S_T_A_G_V_f_gold(int A [], int arr_size, int sum)
    { 
        int l , r ; 
        for ( int i = 0 ; 
        i < arr_size - 2 ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < arr_size - 1 ; 
            j ++ ) { 
                for ( int k = j + 1 ; 
                k < arr_size ; 
                k ++ ) { 
                    if ( A [ i ] + A [ j ] + A [ k ] == sum ) { 
                        cout << "Triplet is " << A [ i ] << ", " << A [ j ] << ", " << A [ k ] ; 
                        return true ; 
                    } 
                } 
            } 
        } 
        return false ; 
    } 
FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE() {}
};