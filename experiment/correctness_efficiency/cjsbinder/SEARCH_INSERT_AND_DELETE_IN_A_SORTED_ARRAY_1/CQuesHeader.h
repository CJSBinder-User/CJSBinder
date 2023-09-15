#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEARCH_INSERT_AND_DELETE_IN_A_SORTED_ARRAY_1 {
public:
    int S_I_A_D_I_A_S_A_1_f_gold(int arr [], int n, int key, int capacity)
    { 
        if ( n >= capacity ) return n ; 
        int i ; 
        for ( i = n - 1 ; 
        ( i >= 0 && arr [ i ] > key ) ; 
        i -- ) arr [ i + 1 ] = arr [ i ] ; 
        arr [ i + 1 ] = key ; 
        return ( n + 1 ) ; 
    } 
SEARCH_INSERT_AND_DELETE_IN_A_SORTED_ARRAY_1() {}
};