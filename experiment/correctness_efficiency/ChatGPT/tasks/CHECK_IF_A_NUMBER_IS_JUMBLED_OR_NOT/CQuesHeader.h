#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_IF_A_NUMBER_IS_JUMBLED_OR_NOT {
public:
    bool C_I_A_N_I_J_O_N_f_gold(int num)
    { 
        if ( num / 10 == 0 ) return true ; 
        while ( num != 0 ) { 
            if ( num / 10 == 0 ) return true ; 
            int digit1 = num % 10 ; 
            int digit2 = ( num / 10 ) % 10 ; 
            if ( abs ( digit2 - digit1 ) > 1 ) return false ; 
            num = num / 10 ; 
        } 
        return true ; 
    } 
CHECK_IF_A_NUMBER_IS_JUMBLED_OR_NOT() {}
};