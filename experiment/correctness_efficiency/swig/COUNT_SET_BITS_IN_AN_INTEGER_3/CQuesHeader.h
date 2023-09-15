#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_SET_BITS_IN_AN_INTEGER_3 {
public:
    int C_S_B_I_A_I_3_f_gold(int n)
    { 
        if ( n == 0 ) return 0 ; 
        else return 1 + C_S_B_I_A_I_3_f_gold ( n & ( n - 1 ) ) ; 
    } 
COUNT_SET_BITS_IN_AN_INTEGER_3() {}
};