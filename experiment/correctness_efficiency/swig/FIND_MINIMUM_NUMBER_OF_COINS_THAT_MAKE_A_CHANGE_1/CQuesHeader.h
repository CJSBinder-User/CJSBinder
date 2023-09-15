#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MINIMUM_NUMBER_OF_COINS_THAT_MAKE_A_CHANGE_1 {
public:
    int F_M_N_O_C_T_M_A_C_1_f_gold(int coins [], int m, int V)
    { 
        int table [ V + 1 ] ; 
        table [ 0 ] = 0 ; 
        for ( int i = 1 ; 
        i <= V ; 
        i ++ ) table [ i ] = INT_MAX ; 
        for ( int i = 1 ; 
        i <= V ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j < m ; 
            j ++ ) if ( coins [ j ] <= i && i - coins [ j ] <= V ) { 
                int sub_res = table [ i - coins [ j ] ] ; 
                if ( sub_res != INT_MAX && sub_res + 1 < table [ i ] ) table [ i ] = sub_res + 1 ; 
            } 
        } 
        return table [ V ] ; 
    } 
FIND_MINIMUM_NUMBER_OF_COINS_THAT_MAKE_A_CHANGE_1() {}
};