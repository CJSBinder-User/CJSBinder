#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_INCREMENT_K_OPERATIONS_MAKE_ELEMENTS_EQUAL {
public:
    int M_I_K_O_M_E_E_f_gold(int arr [], int n, int k)
    { 
        int max = * max_element ( arr , arr + n ) ; 
        int res = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( ( max - arr [ i ] ) % k != 0 ) return - 1 ; 
            else res += ( max - arr [ i ] ) / k ; 
        } 
        return res ; 
    } 
MINIMUM_INCREMENT_K_OPERATIONS_MAKE_ELEMENTS_EQUAL() {}
};