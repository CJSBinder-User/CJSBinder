#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_IF_A_GIVEN_ARRAY_CAN_REPRESENT_PREORDER_TRAVERSAL_OF_BINARY_SEARCH_TREE {
public:
    bool C_I_A_G_A_C_R_P_T_O_B_S_T_f_gold(int pre [], int n)
    { 
        stack < int > s ; 
        int root = INT_MIN ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( pre [ i ] < root ) return false ; 
            while ( ! s . empty ( ) && s . top ( ) < pre [ i ] ) { 
                root = s . top ( ) ; 
                s . pop ( ) ; 
            } 
            s . push ( pre [ i ] ) ; 
        } 
        return true ; 
    } 
CHECK_IF_A_GIVEN_ARRAY_CAN_REPRESENT_PREORDER_TRAVERSAL_OF_BINARY_SEARCH_TREE() {}
};