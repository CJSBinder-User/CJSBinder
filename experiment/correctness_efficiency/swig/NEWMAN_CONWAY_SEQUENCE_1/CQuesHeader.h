#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NEWMAN_CONWAY_SEQUENCE_1 {
public:
    int N_C_S_1_f_gold(int n)
    { 
        int f [ n + 1 ] ; 
        int i ; 
        f [ 0 ] = 0 ; 
        f [ 1 ] = 1 ; 
        f [ 2 ] = 1 ; 
        for ( i = 3 ; 
        i <= n ; 
        i ++ ) f [ i ] = f [ f [ i - 1 ] ] + f [ i - f [ i - 1 ] ] ; 
        return f [ n ] ; 
    } 
NEWMAN_CONWAY_SEQUENCE_1() {}
};