#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_ARRAY_MAJORITY_ELEMENT {
public:
    bool C_A_M_E_f_gold(int a [], int n)
    { 
        unordered_map < int , int > mp ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) mp [ a [ i ] ] ++ ; 
        for ( auto x : mp ) if ( x . second >= n / 2 ) return true ; 
        return false ; 
    } 
CHECK_ARRAY_MAJORITY_ELEMENT() {}
};