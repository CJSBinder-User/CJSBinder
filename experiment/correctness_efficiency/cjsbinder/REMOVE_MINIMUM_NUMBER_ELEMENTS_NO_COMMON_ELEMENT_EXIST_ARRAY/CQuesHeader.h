#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class REMOVE_MINIMUM_NUMBER_ELEMENTS_NO_COMMON_ELEMENT_EXIST_ARRAY {
public:
    int R_M_N_E_N_C_E_E_A_f_gold(int a [], int b [], int n, int m)
    { 
        unordered_map < int , int > countA , countB ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) countA [ a [ i ] ] ++ ; 
        for ( int i = 0 ; 
        i < m ; 
        i ++ ) countB [ b [ i ] ] ++ ; 
        int res = 0 ; 
        for ( auto x : countA ) if ( countB . find ( x . first ) != countB . end ( ) ) res += min ( x . second , countB [ x . first ] ) ; 
        return res ; 
    } 
REMOVE_MINIMUM_NUMBER_ELEMENTS_NO_COMMON_ELEMENT_EXIST_ARRAY() {}
};