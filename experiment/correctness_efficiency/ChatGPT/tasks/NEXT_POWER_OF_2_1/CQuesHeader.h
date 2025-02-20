#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NEXT_POWER_OF_2_1 {
public:
    unsigned int N_P_O_2_1_f_gold(unsigned int n)
    { 
        unsigned int p = 1 ; 
        if ( n && ! ( n & ( n - 1 ) ) ) return n ; 
        while ( p < n ) p <<= 1 ; 
        return p ; 
    } 
NEXT_POWER_OF_2_1() {}
};