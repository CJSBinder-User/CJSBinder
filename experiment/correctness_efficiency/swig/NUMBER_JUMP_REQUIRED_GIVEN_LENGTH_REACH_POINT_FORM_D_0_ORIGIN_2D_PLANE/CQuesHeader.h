#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_JUMP_REQUIRED_GIVEN_LENGTH_REACH_POINT_FORM_D_0_ORIGIN_2D_PLANE {
public:
    int N_J_R_G_L_R_P_F_D_0_O_2_P_f_gold(int a, int b, int d)
    { 
        int temp = a ; 
        a = min ( a , b ) ; 
        b = max ( temp , b ) ; 
        if ( d >= b ) return ( d + b - 1 ) / b ; 
        if ( d == 0 ) return 0 ; 
        if ( d == a ) return 1 ; 
        return 2 ; 
    } 
NUMBER_JUMP_REQUIRED_GIVEN_LENGTH_REACH_POINT_FORM_D_0_ORIGIN_2D_PLANE() {}
};