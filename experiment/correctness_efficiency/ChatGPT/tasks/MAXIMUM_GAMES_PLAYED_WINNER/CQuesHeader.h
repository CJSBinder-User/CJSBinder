#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_GAMES_PLAYED_WINNER {
public:
    int M_G_P_W_f_gold(int N)
    { 
        int dp [ N ] ; 
        dp [ 0 ] = 1 ; 
        dp [ 1 ] = 2 ; 
        int i = 2 ; 
        do { 
            dp [ i ] = dp [ i - 1 ] + dp [ i - 2 ] ; 
        } 
        while ( dp [ i ++ ] <= N ) ; 
        return ( i - 2 ) ; 
    } 
MAXIMUM_GAMES_PLAYED_WINNER() {}
};