#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEARCH_INSERT_AND_DELETE_IN_AN_UNSORTED_ARRAY {
public:
    int S_I_A_D_I_A_U_A_f_gold(int arr [], int n, int key)
    { 
        int i ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) if ( arr [ i ] == key ) return i ; 
        return - 1 ; 
    } 
SEARCH_INSERT_AND_DELETE_IN_AN_UNSORTED_ARRAY() {}
};