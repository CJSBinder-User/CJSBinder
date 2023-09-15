#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_STRINGS_CAN_FORMED_USING_B_C_GIVEN_CONSTRAINTS_1 {
public:
    int C_S_C_F_U_B_C_G_C_1_f_gold(int n)
    { 
        return 1 + ( n * 2 ) + ( n * ( ( n * n ) - 1 ) / 2 ) ; 
    } 
COUNT_STRINGS_CAN_FORMED_USING_B_C_GIVEN_CONSTRAINTS_1() {}
};