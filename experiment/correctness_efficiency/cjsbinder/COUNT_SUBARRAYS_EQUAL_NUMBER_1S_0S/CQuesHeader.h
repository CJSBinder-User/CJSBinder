#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_SUBARRAYS_EQUAL_NUMBER_1S_0S {
public:
    int C_S_E_N_1_0_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > um ; 
        int curr_sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            curr_sum += ( arr [ i ] == 0 ) ? - 1 : arr [ i ] ; 
            um [ curr_sum ] ++ ; 
        } 
        int count = 0 ; 
        for ( auto itr = um . begin ( ) ; 
        itr != um . end ( ) ; 
        itr ++ ) { 
            if ( itr -> second > 1 ) count += ( ( itr -> second * ( itr -> second - 1 ) ) / 2 ) ; 
        } 
        if ( um . find ( 0 ) != um . end ( ) ) count += um [ 0 ] ; 
        return count ; 
    } 
COUNT_SUBARRAYS_EQUAL_NUMBER_1S_0S() {}
};