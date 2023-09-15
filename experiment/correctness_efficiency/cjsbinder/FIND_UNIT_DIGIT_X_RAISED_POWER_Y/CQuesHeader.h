#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_UNIT_DIGIT_X_RAISED_POWER_Y {
public:
    int F_U_D_X_R_P_Y_f_gold(int x, int y)
    { 
        int res = 1 ; 
        for ( int i = 0 ; 
        i < y ; 
        i ++ ) res = ( res * x ) % 10 ; 
        return res ; 
    } 
FIND_UNIT_DIGIT_X_RAISED_POWER_Y() {}
};