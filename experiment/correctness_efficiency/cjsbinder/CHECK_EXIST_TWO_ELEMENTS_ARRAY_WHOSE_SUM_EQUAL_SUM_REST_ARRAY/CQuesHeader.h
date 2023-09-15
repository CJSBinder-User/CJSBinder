#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_EXIST_TWO_ELEMENTS_ARRAY_WHOSE_SUM_EQUAL_SUM_REST_ARRAY {
public:
    bool C_E_T_E_A_W_S_E_S_R_A_f_gold(int arr [], int n)
    { 
        int sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) sum += arr [ i ] ; 
        if ( sum % 2 != 0 ) return false ; 
        sum = sum / 2 ; 
        unordered_set < int > s ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int val = sum - arr [ i ] ; 
            if ( s . find ( val ) != s . end ( ) ) { 
                printf ( "Pair elements are %d and %d\n" , arr [ i ] , val ) ; 
                return true ; 
            } 
            s . insert ( arr [ i ] ) ; 
        } 
        return false ; 
    } 
CHECK_EXIST_TWO_ELEMENTS_ARRAY_WHOSE_SUM_EQUAL_SUM_REST_ARRAY() {}
};