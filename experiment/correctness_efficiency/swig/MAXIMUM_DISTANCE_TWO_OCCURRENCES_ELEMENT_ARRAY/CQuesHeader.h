#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_DISTANCE_TWO_OCCURRENCES_ELEMENT_ARRAY {
public:
    int M_D_T_O_E_A_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > mp ; 
        int max_dist = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( mp . find ( arr [ i ] ) == mp . end ( ) ) mp [ arr [ i ] ] = i ; 
            else max_dist = max ( max_dist , i - mp [ arr [ i ] ] ) ; 
        } 
        return max_dist ; 
    } 
MAXIMUM_DISTANCE_TWO_OCCURRENCES_ELEMENT_ARRAY() {}
};