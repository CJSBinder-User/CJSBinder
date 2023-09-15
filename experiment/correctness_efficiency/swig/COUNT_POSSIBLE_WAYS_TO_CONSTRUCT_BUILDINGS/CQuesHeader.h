#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_POSSIBLE_WAYS_TO_CONSTRUCT_BUILDINGS {
public:
    int C_P_W_T_C_B_f_gold(int N)
    { 
        if ( N == 1 ) return 4 ; 
        int countB = 1 , countS = 1 , prev_countB , prev_countS ; 
        for ( int i = 2 ; 
        i <= N ; 
        i ++ ) { 
            prev_countB = countB ; 
            prev_countS = countS ; 
            countS = prev_countB + prev_countS ; 
            countB = prev_countS ; 
        } 
        int result = countS + countB ; 
        return ( result * result ) ; 
    } 
COUNT_POSSIBLE_WAYS_TO_CONSTRUCT_BUILDINGS() {}
};