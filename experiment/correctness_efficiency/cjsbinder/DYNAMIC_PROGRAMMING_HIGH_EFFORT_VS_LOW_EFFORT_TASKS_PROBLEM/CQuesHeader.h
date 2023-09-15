#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_HIGH_EFFORT_VS_LOW_EFFORT_TASKS_PROBLEM {
public:
    int D_P_H_E_V_L_E_T_P_f_gold(int high [], int low [], int n)
    { 
        if ( n <= 0 ) return 0 ; 
        return max ( high [ n - 1 ] + D_P_H_E_V_L_E_T_P_f_gold ( high , low , ( n - 2 ) ) , low [ n - 1 ] + D_P_H_E_V_L_E_T_P_f_gold ( high , low , ( n - 1 ) ) ) ; 
    } 
DYNAMIC_PROGRAMMING_HIGH_EFFORT_VS_LOW_EFFORT_TASKS_PROBLEM() {}
};