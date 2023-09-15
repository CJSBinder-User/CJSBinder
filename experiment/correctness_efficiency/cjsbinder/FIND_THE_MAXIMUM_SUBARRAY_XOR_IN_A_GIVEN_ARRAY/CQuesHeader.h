#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_MAXIMUM_SUBARRAY_XOR_IN_A_GIVEN_ARRAY {
public:
    int F_T_M_S_X_I_A_G_A_f_gold(int arr [], int n)
    { 
        int ans = INT_MIN ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int curr_xor = 0 ; 
            for ( int j = i ; 
            j < n ; 
            j ++ ) { 
                curr_xor = curr_xor ^ arr [ j ] ; 
                ans = max ( ans , curr_xor ) ; 
            } 
        } 
        return ans ; 
    } 
FIND_THE_MAXIMUM_SUBARRAY_XOR_IN_A_GIVEN_ARRAY() {}
};