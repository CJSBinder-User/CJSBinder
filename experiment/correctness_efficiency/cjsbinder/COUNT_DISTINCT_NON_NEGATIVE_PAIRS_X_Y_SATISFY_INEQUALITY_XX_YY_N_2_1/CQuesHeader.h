#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_DISTINCT_NON_NEGATIVE_PAIRS_X_Y_SATISFY_INEQUALITY_XX_YY_N_2_1 {
public:
    int C_D_N_N_P_X_Y_S_I_X_Y_N_2_1_f_gold(int n)
    { 
        int x = 0 , yCount , res = 0 ; 
        for ( yCount = 0 ; 
        yCount * yCount < n ; 
        yCount ++ ) ; 
        while ( yCount != 0 ) { 
            res += yCount ; 
            x ++ ; 
            while ( yCount != 0 && ( x * x + ( yCount - 1 ) * ( yCount - 1 ) >= n ) ) yCount -- ; 
        } 
        return res ; 
    } 
COUNT_DISTINCT_NON_NEGATIVE_PAIRS_X_Y_SATISFY_INEQUALITY_XX_YY_N_2_1() {}
};