#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_POWER_OF_2_GREATER_THAN_OR_EQUAL_TO_N {
public:
    unsigned int S_P_O_2_G_T_O_E_T_N_f_gold(unsigned int n)
    { 
        unsigned count = 0 ; 
        if ( n && ! ( n & ( n - 1 ) ) ) return n ; 
        while ( n != 0 ) { 
            n >>= 1 ; 
            count += 1 ; 
        } 
        return 1 << count ; 
    } 
SMALLEST_POWER_OF_2_GREATER_THAN_OR_EQUAL_TO_N() {}
};