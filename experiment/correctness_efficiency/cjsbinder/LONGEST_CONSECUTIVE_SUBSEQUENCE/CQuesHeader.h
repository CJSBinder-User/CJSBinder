#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_CONSECUTIVE_SUBSEQUENCE {
public:
    int L_C_S_f_gold(int arr [], int n)
    { 
        unordered_set < int > S ; 
        int ans = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) S . insert ( arr [ i ] ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( S . find ( arr [ i ] - 1 ) == S . end ( ) ) { 
                int j = arr [ i ] ; 
                while ( S . find ( j ) != S . end ( ) ) j ++ ; 
                ans = max ( ans , j - arr [ i ] ) ; 
            } 
        } 
        return ans ; 
    } 
LONGEST_CONSECUTIVE_SUBSEQUENCE() {}
};