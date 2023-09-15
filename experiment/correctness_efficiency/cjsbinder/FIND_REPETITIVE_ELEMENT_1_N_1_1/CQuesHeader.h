#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_REPETITIVE_ELEMENT_1_N_1_1 {
public:
    int F_R_E_1_N_1_1_f_gold(int arr [], int n)
    { 
        unordered_set < int > s ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( s . find ( arr [ i ] ) != s . end ( ) ) return arr [ i ] ; 
            s . insert ( arr [ i ] ) ; 
        } 
        return - 1 ; 
    } 
FIND_REPETITIVE_ELEMENT_1_N_1_1() {}
};