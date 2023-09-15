#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE {
public:
    int M_R_F_M_E_O_N_B_W_G_S_f_gold(string slots [], int n, int m)
    { 
        int counts [ m ] = { 
            0 } 
        ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = 0 ; 
        j < m ; 
        j ++ ) if ( slots [ i ] [ j ] == '1' ) counts [ j ] ++ ; 
        return * max_element ( counts , counts + m ) ; 
    } 
MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE() {}
};