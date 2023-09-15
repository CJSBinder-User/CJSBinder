#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NON_REPEATING_ELEMENT_1 {
public:
    int N_R_E_1_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > mp ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) mp [ arr [ i ] ] ++ ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( mp [ arr [ i ] ] == 1 ) return arr [ i ] ; 
        return - 1 ; 
    } 
NON_REPEATING_ELEMENT_1() {}
};