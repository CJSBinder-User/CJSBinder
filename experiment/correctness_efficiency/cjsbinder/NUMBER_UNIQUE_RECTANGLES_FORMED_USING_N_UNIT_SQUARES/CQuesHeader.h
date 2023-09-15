#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_UNIQUE_RECTANGLES_FORMED_USING_N_UNIT_SQUARES {
public:
    int N_U_R_F_U_N_U_S_f_gold(int n)
    { 
        int ans = 0 ; 
        for ( int length = 1 ; 
        length <= sqrt ( n ) ; 
        ++ length ) for ( int height = length ; 
        height * length <= n ; 
        ++ height ) ans ++ ; 
        return ans ; 
    } 
NUMBER_UNIQUE_RECTANGLES_FORMED_USING_N_UNIT_SQUARES() {}
};