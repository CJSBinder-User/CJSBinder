#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNTING_PAIRS_PERSON_CAN_FORM_PAIR_ONE_1 {
public:
    int C_P_P_C_F_P_O_1_f_gold(int x)
    { 
        int dp [ x + 1 ] ; 
        dp [ 0 ] = dp [ 1 ] = 1 ; 
        for ( int i = 2 ; 
        i <= x ; 
        i ++ ) dp [ i ] = dp [ i - 1 ] + ( i - 1 ) * dp [ i - 2 ] ; 
        return dp [ x ] ; 
    } 
COUNTING_PAIRS_PERSON_CAN_FORM_PAIR_ONE_1() {}
};