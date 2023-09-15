#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_NUMBER_POWER_K_USING_BASE_CHANGING_METHOD {
public:
    bool C_N_P_K_U_B_C_M_f_gold(unsigned int n, unsigned int k)
    { 
        bool oneSeen = false ; 
        while ( n > 0 ) { 
            int digit = n % k ; 
            if ( digit > 1 ) return false ; 
            if ( digit == 1 ) { 
                if ( oneSeen ) return false ; 
                oneSeen = true ; 
            } 
            n /= k ; 
        } 
        return true ; 
    } 
CHECK_NUMBER_POWER_K_USING_BASE_CHANGING_METHOD() {}
};