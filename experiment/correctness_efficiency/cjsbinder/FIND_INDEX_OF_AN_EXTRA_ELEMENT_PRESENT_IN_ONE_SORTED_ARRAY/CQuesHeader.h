#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_INDEX_OF_AN_EXTRA_ELEMENT_PRESENT_IN_ONE_SORTED_ARRAY {
public:
    int F_I_O_A_E_E_P_I_O_S_A_f_gold(int arr1 [], int arr2 [], int n)
    { 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( arr1 [ i ] != arr2 [ i ] ) return i ; 
        return n ; 
    } 
FIND_INDEX_OF_AN_EXTRA_ELEMENT_PRESENT_IN_ONE_SORTED_ARRAY() {}
};