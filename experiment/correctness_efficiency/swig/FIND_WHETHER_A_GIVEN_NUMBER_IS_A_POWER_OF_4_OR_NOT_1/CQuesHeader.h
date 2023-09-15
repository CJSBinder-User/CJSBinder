#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_WHETHER_A_GIVEN_NUMBER_IS_A_POWER_OF_4_OR_NOT_1 {
public:
    bool F_W_A_G_N_I_A_P_O_4_O_N_1_f_gold(unsigned int n)
    { 
        int count = 0 ; 
        if ( n && ! ( n & ( n - 1 ) ) ) { 
            while ( n > 1 ) { 
                n >>= 1 ; 
                count += 1 ; 
            } 
            return ( count % 2 == 0 ) ? 1 : 0 ; 
        } 
        return 0 ; 
    } 
FIND_WHETHER_A_GIVEN_NUMBER_IS_A_POWER_OF_4_OR_NOT_1() {}
};