#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_SUBARRAY_SUM_DIVISIBLE_K {
public:
    int L_S_S_D_K_f_gold(int arr [], int n, int k)
    { 
        unordered_map < int , int > um ; 
        int mod_arr [ n ] , max = 0 ; 
        int curr_sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            curr_sum += arr [ i ] ; 
            mod_arr [ i ] = ( ( curr_sum % k ) + k ) % k ; 
        } 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( mod_arr [ i ] == 0 ) max = i + 1 ; 
            else if ( um . find ( mod_arr [ i ] ) == um . end ( ) ) um [ mod_arr [ i ] ] = i ; 
            else if ( max < ( i - um [ mod_arr [ i ] ] ) ) max = i - um [ mod_arr [ i ] ] ; 
        } 
        return max ; 
    } 
LONGEST_SUBARRAY_SUM_DIVISIBLE_K() {}
};