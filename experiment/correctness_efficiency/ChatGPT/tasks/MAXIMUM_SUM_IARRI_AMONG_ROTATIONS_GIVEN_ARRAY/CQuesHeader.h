#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_SUM_IARRI_AMONG_ROTATIONS_GIVEN_ARRAY {
public:
    int M_S_I_A_R_G_A_f_gold(int arr [], int n)
    { 
        int res = INT_MIN ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int curr_sum = 0 ; 
            for ( int j = 0 ; 
            j < n ; 
            j ++ ) { 
                int index = ( i + j ) % n ; 
                curr_sum += j * arr [ index ] ; 
            } 
            res = max ( res , curr_sum ) ; 
        } 
        return res ; 
    } 
MAXIMUM_SUM_IARRI_AMONG_ROTATIONS_GIVEN_ARRAY() {}
};