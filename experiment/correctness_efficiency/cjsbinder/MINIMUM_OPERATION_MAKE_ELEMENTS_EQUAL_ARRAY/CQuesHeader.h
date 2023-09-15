#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_OPERATION_MAKE_ELEMENTS_EQUAL_ARRAY {
public:
    int M_O_M_E_E_A_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > hash ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) hash [ arr [ i ] ] ++ ; 
        int max_count = 0 ; 
        for ( auto i : hash ) if ( max_count < i . second ) max_count = i . second ; 
        return ( n - max_count ) ; 
    } 
MINIMUM_OPERATION_MAKE_ELEMENTS_EQUAL_ARRAY() {}
};