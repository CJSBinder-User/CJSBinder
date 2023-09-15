#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_FOR_DEADLOCK_FREE_CONDITION_IN_OPERATING_SYSTEM {
public:
    int P_F_D_F_C_I_O_S_f_gold(int process, int need)
    { 
        int minResources = 0 ; 
        minResources = process * ( need - 1 ) + 1 ; 
        return minResources ; 
    } 
PROGRAM_FOR_DEADLOCK_FREE_CONDITION_IN_OPERATING_SYSTEM() {}
};