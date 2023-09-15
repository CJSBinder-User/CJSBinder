#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_COST_MAKE_ARRAY_SIZE_1_REMOVING_LARGER_PAIRS {
public:
    int M_C_M_A_S_1_R_L_P_f_gold(int a [], int n)
    { 
        return ( n - 1 ) * ( * min_element ( a , a + n ) ) ; 
    } 
MINIMUM_COST_MAKE_ARRAY_SIZE_1_REMOVING_LARGER_PAIRS() {}
};