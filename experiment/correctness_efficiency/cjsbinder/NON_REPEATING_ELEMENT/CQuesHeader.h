#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NON_REPEATING_ELEMENT {
public:
    int N_R_E_f_gold(int arr [], int n)
    { 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int j ; 
            for ( j = 0 ; 
            j < n ; 
            j ++ ) if ( i != j && arr [ i ] == arr [ j ] ) break ; 
            if ( j == n ) return arr [ i ] ; 
        } 
        return - 1 ; 
    } 
NON_REPEATING_ELEMENT() {}
};