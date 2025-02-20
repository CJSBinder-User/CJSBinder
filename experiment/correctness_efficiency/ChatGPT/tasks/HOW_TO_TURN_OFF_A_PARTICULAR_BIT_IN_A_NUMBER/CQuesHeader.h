#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class HOW_TO_TURN_OFF_A_PARTICULAR_BIT_IN_A_NUMBER {
public:
    int H_T_T_O_A_P_B_I_A_N_f_gold(int n, int k)
    { 
        if ( k <= 0 ) return n ; 
        return ( n & ~ ( 1 << ( k - 1 ) ) ) ; 
    } 
HOW_TO_TURN_OFF_A_PARTICULAR_BIT_IN_A_NUMBER() {}
};