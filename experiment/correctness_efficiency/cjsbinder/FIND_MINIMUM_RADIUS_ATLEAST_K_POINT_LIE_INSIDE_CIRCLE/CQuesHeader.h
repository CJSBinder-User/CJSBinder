#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MINIMUM_RADIUS_ATLEAST_K_POINT_LIE_INSIDE_CIRCLE {
public:
    int F_M_R_A_K_P_L_I_C_f_gold(int k, int x [], int y [], int n)
    { 
        int dis [ n ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) dis [ i ] = x [ i ] * x [ i ] + y [ i ] * y [ i ] ; 
        sort ( dis , dis + n ) ; 
        return dis [ k - 1 ] ; 
    } 
FIND_MINIMUM_RADIUS_ATLEAST_K_POINT_LIE_INSIDE_CIRCLE() {}
};