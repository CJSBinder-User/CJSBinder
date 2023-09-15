#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_TIME_TO_FINISH_TASKS_WITHOUT_SKIPPING_TWO_CONSECUTIVE {
public:
    int M_T_T_F_T_W_S_T_C_f_gold(int arr [], int n)
    { 
        if ( n <= 0 ) return 0 ; 
        int incl = arr [ 0 ] ; 
        int excl = 0 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            int incl_new = arr [ i ] + min ( excl , incl ) ; 
            int excl_new = incl ; 
            incl = incl_new ; 
            excl = excl_new ; 
        } 
        return min ( incl , excl ) ; 
    } 
MINIMUM_TIME_TO_FINISH_TASKS_WITHOUT_SKIPPING_TWO_CONSECUTIVE() {}
};