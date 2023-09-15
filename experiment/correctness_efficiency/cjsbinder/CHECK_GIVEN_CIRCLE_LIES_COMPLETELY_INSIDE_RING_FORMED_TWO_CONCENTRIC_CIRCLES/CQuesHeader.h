#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_GIVEN_CIRCLE_LIES_COMPLETELY_INSIDE_RING_FORMED_TWO_CONCENTRIC_CIRCLES {
public:
    bool C_G_C_L_C_I_R_F_T_C_C_f_gold(int r, int R, int r1, int x1, int y1)
    { 
        int dis = sqrt ( x1 * x1 + y1 * y1 ) ; 
        return ( dis - r1 >= R && dis + r1 <= r ) ; 
    } 
CHECK_GIVEN_CIRCLE_LIES_COMPLETELY_INSIDE_RING_FORMED_TWO_CONCENTRIC_CIRCLES() {}
};