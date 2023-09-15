#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_OBTUSE_ANGLES_CIRCLE_K_EQUIDISTANT_POINTS_2_GIVEN_POINTS {
public:
    int C_O_A_C_K_E_P_2_G_P_f_gold(int a, int b, int k)
    { 
        int c1 = ( b - a ) - 1 ; 
        int c2 = ( k - b ) + ( a - 1 ) ; 
        if ( c1 == c2 ) return 0 ; 
        return min ( c1 , c2 ) ; 
    } 
COUNT_OBTUSE_ANGLES_CIRCLE_K_EQUIDISTANT_POINTS_2_GIVEN_POINTS() {}
};