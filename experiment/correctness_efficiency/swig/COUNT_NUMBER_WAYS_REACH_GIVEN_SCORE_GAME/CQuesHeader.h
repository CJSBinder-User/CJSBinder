#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBER_WAYS_REACH_GIVEN_SCORE_GAME {
public:
    int C_N_W_R_G_S_G_f_gold(int n)
    { 
        int table [ n + 1 ] , i ; 
        for ( int j = 0 ; 
        j < n + 1 ; 
        j ++ ) table [ j ] = 0 ; 
        table [ 0 ] = 1 ; 
        for ( i = 3 ; 
        i <= n ; 
        i ++ ) table [ i ] += table [ i - 3 ] ; 
        for ( i = 5 ; 
        i <= n ; 
        i ++ ) table [ i ] += table [ i - 5 ] ; 
        for ( i = 10 ; 
        i <= n ; 
        i ++ ) table [ i ] += table [ i - 10 ] ; 
        return table [ n ] ; 
    } 
COUNT_NUMBER_WAYS_REACH_GIVEN_SCORE_GAME() {}
};