#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_DISTINCT_NON_NEGATIVE_PAIRS_X_Y_SATISFY_INEQUALITY_XX_YY_N_2 {
public:
    int C_D_N_N_P_X_Y_S_I_X_Y_N_2_f_gold(int n)
    { 
        int res = 0 ; 
        for ( int x = 0 ; 
        x * x < n ; 
        x ++ ) for ( int y = 0 ; 
        x * x + y * y < n ; 
        y ++ ) res ++ ; 
        return res ; 
    } 
COUNT_DISTINCT_NON_NEGATIVE_PAIRS_X_Y_SATISFY_INEQUALITY_XX_YY_N_2() {}
};