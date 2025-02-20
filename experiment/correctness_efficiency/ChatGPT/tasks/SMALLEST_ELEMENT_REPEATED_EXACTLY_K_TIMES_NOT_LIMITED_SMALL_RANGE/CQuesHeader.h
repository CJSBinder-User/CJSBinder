#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_ELEMENT_REPEATED_EXACTLY_K_TIMES_NOT_LIMITED_SMALL_RANGE {
public:
    int S_E_R_E_K_T_N_L_S_R_f_gold(int a [], int n, int k)
    { 
        unordered_map < int , int > m ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) m [ a [ i ] ] ++ ; 
        int res = INT_MAX ; 
        for ( auto it = m . begin ( ) ; 
        it != m . end ( ) ; 
        ++ it ) if ( it -> second == k ) res = min ( res , it -> first ) ; 
        return ( res != INT_MAX ) ? res : - 1 ; 
    } 
SMALLEST_ELEMENT_REPEATED_EXACTLY_K_TIMES_NOT_LIMITED_SMALL_RANGE() {}
};