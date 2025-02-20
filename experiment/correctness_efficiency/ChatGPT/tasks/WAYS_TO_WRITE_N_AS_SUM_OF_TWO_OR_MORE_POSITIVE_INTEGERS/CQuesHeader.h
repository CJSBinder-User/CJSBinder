#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class WAYS_TO_WRITE_N_AS_SUM_OF_TWO_OR_MORE_POSITIVE_INTEGERS {
public:
    int W_T_W_N_A_S_O_T_O_M_P_I_f_gold(int n)
    { 
        int table [ n + 1 ] ; 
        memset ( table , 0 , sizeof ( table ) ) ; 
        table [ 0 ] = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) for ( int j = i ; 
        j <= n ; 
        j ++ ) table [ j ] += table [ j - i ] ; 
        return table [ n ] ; 
    } 
WAYS_TO_WRITE_N_AS_SUM_OF_TWO_OR_MORE_POSITIVE_INTEGERS() {}
};