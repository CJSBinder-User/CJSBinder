#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SCHEDULE_ELEVATOR_TO_REDUCE_THE_TOTAL_TIME_TAKEN {
public:
    int S_E_T_R_T_T_T_T_f_gold(int n, int k, int a [])
    { 
        sort ( a , a + n , greater < int > ( ) ) ; 
        int S_E_T_R_T_T_T_T_f_gold = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i += k ) S_E_T_R_T_T_T_T_f_gold += ( 2 * a [ i ] ) ; 
        return S_E_T_R_T_T_T_T_f_gold ; 
    } 
SCHEDULE_ELEVATOR_TO_REDUCE_THE_TOTAL_TIME_TAKEN() {}
};