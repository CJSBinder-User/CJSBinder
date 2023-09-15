#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_OF_THREE_INTEGERS_WITHOUT_COMPARISON_OPERATORS_1 {
public:
    int S_O_T_I_W_C_O_1_f_gold(int x, int y, int z)
    { 
        if ( ! ( y / x ) ) return ( ! ( y / z ) ) ? y : z ; 
        return ( ! ( x / z ) ) ? x : z ; 
    } 
SMALLEST_OF_THREE_INTEGERS_WITHOUT_COMPARISON_OPERATORS_1() {}
};