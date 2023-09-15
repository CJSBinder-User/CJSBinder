#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class BELL_NUMBERS_NUMBER_OF_WAYS_TO_PARTITION_A_SET {
public:
    int B_N_N_O_W_T_P_A_S_f_gold(int n)
    { 
        int bell [ n + 1 ] [ n + 1 ] ; 
        bell [ 0 ] [ 0 ] = 1 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) { 
            bell [ i ] [ 0 ] = bell [ i - 1 ] [ i - 1 ] ; 
            for ( int j = 1 ; 
            j <= i ; 
            j ++ ) bell [ i ] [ j ] = bell [ i - 1 ] [ j - 1 ] + bell [ i ] [ j - 1 ] ; 
        } 
        return bell [ n ] [ 0 ] ; 
    } 
BELL_NUMBERS_NUMBER_OF_WAYS_TO_PARTITION_A_SET() {}
};