#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_SET_BITS_IN_AN_INTEGER_1 {
public:
    int C_S_B_I_A_I_1_f_gold(int n)
    { 
        if ( n == 0 ) return 0 ; 
        else return ( n & 1 ) + C_S_B_I_A_I_1_f_gold ( n >> 1 ) ; 
    } 
COUNT_SET_BITS_IN_AN_INTEGER_1() {}
};