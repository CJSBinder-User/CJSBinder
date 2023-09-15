#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_ARRAY_REPRESENTS_INORDER_BINARY_SEARCH_TREE_NOT {
public:
    bool C_A_R_I_B_S_T_N_f_gold(int arr [], int n)
    { 
        if ( n == 0 || n == 1 ) return true ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) if ( arr [ i - 1 ] > arr [ i ] ) return false ; 
        return true ; 
    } 
CHECK_ARRAY_REPRESENTS_INORDER_BINARY_SEARCH_TREE_NOT() {}
};