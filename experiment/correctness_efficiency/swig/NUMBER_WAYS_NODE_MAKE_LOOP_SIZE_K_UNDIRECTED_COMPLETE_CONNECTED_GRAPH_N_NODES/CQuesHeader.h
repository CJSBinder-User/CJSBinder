#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_WAYS_NODE_MAKE_LOOP_SIZE_K_UNDIRECTED_COMPLETE_CONNECTED_GRAPH_N_NODES {
public:
    int N_W_N_M_L_S_K_U_C_C_G_N_N_f_gold(int n, int k)
    { 
        int p = 1 ; 
        if ( k % 2 ) p = - 1 ; 
        return ( pow ( n - 1 , k ) + p * ( n - 1 ) ) / n ; 
    } 
NUMBER_WAYS_NODE_MAKE_LOOP_SIZE_K_UNDIRECTED_COMPLETE_CONNECTED_GRAPH_N_NODES() {}
};