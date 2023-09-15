#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRODUCT_NODES_K_TH_LEVEL_TREE_REPRESENTED_STRING {
public:
    int P_N_K_T_L_T_R_S_f_gold(string tree, int k)
    { 
        int level = - 1 ; 
        int product = 1 ; 
        int n = tree . length ( ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( tree [ i ] == '(' ) level ++ ; 
            else if ( tree [ i ] == ')' ) level -- ; 
            else { 
                if ( level == k ) product *= ( tree [ i ] - '0' ) ; 
            } 
        } 
        return product ; 
    } 
PRODUCT_NODES_K_TH_LEVEL_TREE_REPRESENTED_STRING() {}
};