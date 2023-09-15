#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_DERANGEMENTS_PERMUTATION_SUCH_THAT_NO_ELEMENT_APPEARS_IN_ITS_ORIGINAL_POSITION_1 {
public:
    int C_D_P_S_T_N_E_A_I_I_O_P_1_f_gold(int n)
    { 
        int der [ n + 1 ] ; 
        der [ 0 ] = 1 ; 
        der [ 1 ] = 0 ; 
        der [ 2 ] = 1 ; 
        for ( int i = 3 ; 
        i <= n ; 
        ++ i ) der [ i ] = ( i - 1 ) * ( der [ i - 1 ] + der [ i - 2 ] ) ; 
        return der [ n ] ; 
    } 
COUNT_DERANGEMENTS_PERMUTATION_SUCH_THAT_NO_ELEMENT_APPEARS_IN_ITS_ORIGINAL_POSITION_1() {}
};