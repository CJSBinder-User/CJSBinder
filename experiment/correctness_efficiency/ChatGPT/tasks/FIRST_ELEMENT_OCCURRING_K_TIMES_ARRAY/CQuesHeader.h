#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIRST_ELEMENT_OCCURRING_K_TIMES_ARRAY {
public:
    int F_E_O_K_T_A_f_gold(int arr [], int n, int k)
    { 
        unordered_map < int , int > count_map ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) count_map [ arr [ i ] ] ++ ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( count_map [ arr [ i ] ] == k ) return arr [ i ] ; 
        return - 1 ; 
    } 
FIRST_ELEMENT_OCCURRING_K_TIMES_ARRAY() {}
};