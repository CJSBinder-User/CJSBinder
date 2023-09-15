#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_POSSIBLE_SUM_WINDOW_ARRAY_ELEMENTS_WINDOW_ARRAY_UNIQUE {
public:
    int M_P_S_W_A_E_W_A_U_f_gold(int A [], int B [], int n)
    { 
        unordered_set < int > mp ; 
        int result = 0 ; 
        int curr_sum = 0 , curr_begin = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        ++ i ) { 
            while ( mp . find ( A [ i ] ) != mp . end ( ) ) { 
                mp . erase ( A [ curr_begin ] ) ; 
                curr_sum -= B [ curr_begin ] ; 
                curr_begin ++ ; 
            } 
            mp . insert ( A [ i ] ) ; 
            curr_sum += B [ i ] ; 
            result = max ( result , curr_sum ) ; 
        } 
        return result ; 
    } 
MAXIMUM_POSSIBLE_SUM_WINDOW_ARRAY_ELEMENTS_WINDOW_ARRAY_UNIQUE() {}
};