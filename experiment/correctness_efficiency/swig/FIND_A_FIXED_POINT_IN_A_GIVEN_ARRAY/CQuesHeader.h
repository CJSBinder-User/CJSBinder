#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_A_FIXED_POINT_IN_A_GIVEN_ARRAY {
public:
    int F_A_F_P_I_A_G_A_f_gold(int arr [], int n)
    { 
        int i ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] == i ) return i ; 
        } 
        return - 1 ; 
    } 
FIND_A_FIXED_POINT_IN_A_GIVEN_ARRAY() {}
};