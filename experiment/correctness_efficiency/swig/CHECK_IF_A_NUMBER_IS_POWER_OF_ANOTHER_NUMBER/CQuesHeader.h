#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_IF_A_NUMBER_IS_POWER_OF_ANOTHER_NUMBER {
public:
    bool C_I_A_N_I_P_O_A_N_f_gold(int x, long y)
    { 
        if ( x == 1 ) return ( y == 1 ) ; 
        long int pow = 1 ; 
        while ( pow < y ) pow *= x ; 
        return ( pow == y ) ; 
    } 
CHECK_IF_A_NUMBER_IS_POWER_OF_ANOTHER_NUMBER() {}
};