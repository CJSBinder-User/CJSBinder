#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_ARRAY_CONTAINS_CONTIGUOUS_INTEGERS_DUPLICATES_ALLOWED_1 {
public:
    bool C_A_C_C_I_D_A_1_f_gold(int arr [], int n)
    { 
        unordered_set < int > us ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) us . insert ( arr [ i ] ) ; 
        int count = 1 ; 
        int curr_ele = arr [ 0 ] - 1 ; 
        while ( us . find ( curr_ele ) != us . end ( ) ) { 
            count ++ ; 
            curr_ele -- ; 
        } 
        curr_ele = arr [ 0 ] + 1 ; 
        while ( us . find ( curr_ele ) != us . end ( ) ) { 
            count ++ ; 
            curr_ele ++ ; 
        } 
        return ( count == ( int ) ( us . size ( ) ) ) ; 
    } 
CHECK_ARRAY_CONTAINS_CONTIGUOUS_INTEGERS_DUPLICATES_ALLOWED_1() {}
};