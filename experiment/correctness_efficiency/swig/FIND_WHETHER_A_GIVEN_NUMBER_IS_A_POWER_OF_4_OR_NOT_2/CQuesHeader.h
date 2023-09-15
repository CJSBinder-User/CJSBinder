#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_WHETHER_A_GIVEN_NUMBER_IS_A_POWER_OF_4_OR_NOT_2 {
public:
    bool F_W_A_G_N_I_A_P_O_4_O_N_2_f_gold(unsigned int n)
    { 
        return n != 0 && ( ( n & ( n - 1 ) ) == 0 ) && ! ( n & 0xAAAAAAAA ) ; 
    } 
FIND_WHETHER_A_GIVEN_NUMBER_IS_A_POWER_OF_4_OR_NOT_2() {}
};