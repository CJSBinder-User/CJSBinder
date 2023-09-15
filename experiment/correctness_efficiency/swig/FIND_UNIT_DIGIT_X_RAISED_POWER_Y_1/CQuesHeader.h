#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_UNIT_DIGIT_X_RAISED_POWER_Y_1 {
public:
    int F_U_D_X_R_P_Y_1_f_gold(int x, int y)
    { 
        x = x % 10 ; 
        if ( y != 0 ) y = y % 4 + 4 ; 
        return ( ( ( int ) ( pow ( x , y ) ) ) % 10 ) ; 
    } 
FIND_UNIT_DIGIT_X_RAISED_POWER_Y_1() {}
};