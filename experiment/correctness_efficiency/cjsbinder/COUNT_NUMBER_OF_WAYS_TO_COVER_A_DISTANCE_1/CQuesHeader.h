#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBER_OF_WAYS_TO_COVER_A_DISTANCE_1 {
public:
    int C_N_O_W_T_C_A_D_1_f_gold(int dist)
    { 
        int count [ dist + 1 ] ; 
        count [ 0 ] = 1 , count [ 1 ] = 1 , count [ 2 ] = 2 ; 
        for ( int i = 3 ; 
        i <= dist ; 
        i ++ ) count [ i ] = count [ i - 1 ] + count [ i - 2 ] + count [ i - 3 ] ; 
        return count [ dist ] ; 
    } 
COUNT_NUMBER_OF_WAYS_TO_COVER_A_DISTANCE_1() {}
};