#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_REMOVAL_FROM_ARRAY_WHEN_REMOVAL_TIME_WAITING_TIME {
public:
    int M_R_F_A_W_R_T_W_T_f_gold(int arr [], int n)
    { 
        int count = 0 ; 
        int cummulative_sum = 0 ; 
        sort ( arr , arr + n ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] >= cummulative_sum ) { 
                count ++ ; 
                cummulative_sum += arr [ i ] ; 
            } 
        } 
        return count ; 
    } 
MAXIMUM_REMOVAL_FROM_ARRAY_WHEN_REMOVAL_TIME_WAITING_TIME() {}
};