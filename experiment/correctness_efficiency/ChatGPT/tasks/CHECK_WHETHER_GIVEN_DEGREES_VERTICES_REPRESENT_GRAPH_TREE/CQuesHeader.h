#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_WHETHER_GIVEN_DEGREES_VERTICES_REPRESENT_GRAPH_TREE {
public:
    bool C_W_G_D_V_R_G_T_f_gold(int degree [], int n)
    { 
        int deg_sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) deg_sum += degree [ i ] ; 
        return ( 2 * ( n - 1 ) == deg_sum ) ; 
    } 
CHECK_WHETHER_GIVEN_DEGREES_VERTICES_REPRESENT_GRAPH_TREE() {}
};