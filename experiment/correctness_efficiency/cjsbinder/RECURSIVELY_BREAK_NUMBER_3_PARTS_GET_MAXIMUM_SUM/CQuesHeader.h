#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class RECURSIVELY_BREAK_NUMBER_3_PARTS_GET_MAXIMUM_SUM {
public:
    int R_B_N_3_P_G_M_S_f_gold(int n)
    { 
        if ( n == 0 || n == 1 ) return n ; 
        return max ( ( R_B_N_3_P_G_M_S_f_gold ( n / 2 ) + R_B_N_3_P_G_M_S_f_gold ( n / 3 ) + R_B_N_3_P_G_M_S_f_gold ( n / 4 ) ) , n ) ; 
    } 
RECURSIVELY_BREAK_NUMBER_3_PARTS_GET_MAXIMUM_SUM() {}
};