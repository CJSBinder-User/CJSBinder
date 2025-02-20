#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_POSSIBLE_SORT_ARRAY_CONDITIONAL_SWAPPING_ADJACENT_ALLOWED {
public:
    bool C_P_S_A_C_S_A_A_f_gold(int arr [], int n)
    { 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) { 
            if ( arr [ i ] > arr [ i + 1 ] ) { 
                if ( arr [ i ] - arr [ i + 1 ] == 1 ) swap ( arr [ i ] , arr [ i + 1 ] ) ; 
                else return false ; 
            } 
        } 
        return true ; 
    } 
CHECK_POSSIBLE_SORT_ARRAY_CONDITIONAL_SWAPPING_ADJACENT_ALLOWED() {}
};