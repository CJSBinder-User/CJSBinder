#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class POSITION_ELEMENT_STABLE_SORT {
public:
    int P_E_S_S_f_gold(int arr [], int n, int idx)
    { 
        int result = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] < arr [ idx ] ) result ++ ; 
            if ( arr [ i ] == arr [ idx ] && i < idx ) result ++ ; 
        } 
        return result ; 
    } 
POSITION_ELEMENT_STABLE_SORT() {}
};