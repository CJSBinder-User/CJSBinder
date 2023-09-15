#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_OF_BINARY_TREES_FOR_GIVEN_PREORDER_SEQUENCE_LENGTH {
public:
    int N_O_B_T_F_G_P_S_L_f_gold(int n)
    { 
        int BT [ n + 1 ] ; 
        memset ( BT , 0 , sizeof ( BT ) ) ; 
        BT [ 0 ] = BT [ 1 ] = 1 ; 
        for ( int i = 2 ; 
        i <= n ; 
        ++ i ) for ( int j = 0 ; 
        j < i ; 
        j ++ ) BT [ i ] += BT [ j ] * BT [ i - j - 1 ] ; 
        return BT [ n ] ; 
    } 
NUMBER_OF_BINARY_TREES_FOR_GIVEN_PREORDER_SEQUENCE_LENGTH() {}
};