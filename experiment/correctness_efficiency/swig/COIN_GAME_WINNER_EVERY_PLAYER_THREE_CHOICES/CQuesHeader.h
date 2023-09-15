#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COIN_GAME_WINNER_EVERY_PLAYER_THREE_CHOICES {
public:
    bool C_G_W_E_P_T_C_f_gold(int x, int y, int n)
    { 
        int dp [ n + 1 ] ; 
        dp [ 0 ] = false ; 
        dp [ 1 ] = true ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) { 
            if ( i - 1 >= 0 and ! dp [ i - 1 ] ) dp [ i ] = true ; 
            else if ( i - x >= 0 and ! dp [ i - x ] ) dp [ i ] = true ; 
            else if ( i - y >= 0 and ! dp [ i - y ] ) dp [ i ] = true ; 
            else dp [ i ] = false ; 
        } 
        return dp [ n ] ; 
    } 
COIN_GAME_WINNER_EVERY_PLAYER_THREE_CHOICES() {}
};