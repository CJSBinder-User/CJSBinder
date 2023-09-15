#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEARCH_INSERT_AND_DELETE_IN_A_SORTED_ARRAY {
public:
    int S_I_A_D_I_A_S_A_f_gold(int arr [], int low, int high, int key)
    { 
        if ( high < low ) return - 1 ; 
        int mid = ( low + high ) / 2 ; 
        if ( key == arr [ mid ] ) return mid ; 
        if ( key > arr [ mid ] ) return S_I_A_D_I_A_S_A_f_gold ( arr , ( mid + 1 ) , high , key ) ; 
        return S_I_A_D_I_A_S_A_f_gold ( arr , low , ( mid - 1 ) , key ) ; 
    } 
SEARCH_INSERT_AND_DELETE_IN_A_SORTED_ARRAY() {}
};