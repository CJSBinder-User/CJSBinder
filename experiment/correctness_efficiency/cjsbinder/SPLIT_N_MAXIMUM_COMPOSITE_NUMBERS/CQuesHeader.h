#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SPLIT_N_MAXIMUM_COMPOSITE_NUMBERS {
public:
    int S_N_M_C_N_f_gold(int n)
    { 
        if ( n < 4 ) return - 1 ; 
        int rem = n % 4 ; 
        if ( rem == 0 ) return n / 4 ; 
        if ( rem == 1 ) { 
            if ( n < 9 ) return - 1 ; 
            return ( n - 9 ) / 4 + 1 ; 
        } 
        if ( rem == 2 ) return ( n - 6 ) / 4 + 1 ; 
        if ( rem == 3 ) { 
            if ( n < 15 ) return - 1 ; 
            return ( n - 15 ) / 4 + 2 ; 
        } 
    } 
SPLIT_N_MAXIMUM_COMPOSITE_NUMBERS() {}
};