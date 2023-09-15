#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_TWO_GIVEN_CIRCLES_TOUCH_INTERSECT {
public:
    int C_T_G_C_T_I_f_gold(int x1, int y1, int x2, int y2, int r1, int r2)
    { 
        int distSq = ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) ; 
        int radSumSq = ( r1 + r2 ) * ( r1 + r2 ) ; 
        if ( distSq == radSumSq ) return 1 ; 
        else if ( distSq > radSumSq ) return - 1 ; 
        else return 0 ; 
    } 
CHECK_TWO_GIVEN_CIRCLES_TOUCH_INTERSECT() {}
};