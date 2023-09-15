#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DISTRIBUTING_ITEMS_PERSON_CANNOT_TAKE_TWO_ITEMS_TYPE_1 {
public:
    bool D_I_P_C_T_T_I_T_1_f_gold(int arr [], int n, int k)
    { 
        unordered_map < int , int > hash ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) hash [ arr [ i ] ] ++ ; 
        for ( auto x : hash ) if ( x . second > 2 * k ) return false ; 
        return true ; 
    } 
DISTRIBUTING_ITEMS_PERSON_CANNOT_TAKE_TWO_ITEMS_TYPE_1() {}
};