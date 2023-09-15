#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_SUM_NON_REPEATING_DISTINCT_ELEMENTS_ARRAY {
public:
    int F_S_N_R_D_E_A_f_gold(int arr [], int n)
    { 
        int sum = 0 ; 
        unordered_set < int > s ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( s . find ( arr [ i ] ) == s . end ( ) ) { 
                sum += arr [ i ] ; 
                s . insert ( arr [ i ] ) ; 
            } 
        } 
        return sum ; 
    } 
FIND_SUM_NON_REPEATING_DISTINCT_ELEMENTS_ARRAY() {}
};