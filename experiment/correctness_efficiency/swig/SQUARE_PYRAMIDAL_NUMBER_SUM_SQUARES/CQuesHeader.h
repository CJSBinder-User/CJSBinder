#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SQUARE_PYRAMIDAL_NUMBER_SUM_SQUARES {
public:
    int S_P_N_S_S_f_gold(int s)
    { 
        int sum = 0 ; 
        for ( int n = 1 ; 
        sum < s ; 
        n ++ ) { 
            sum += n * n ; 
            if ( sum == s ) return n ; 
        } 
        return - 1 ; 
    } 
SQUARE_PYRAMIDAL_NUMBER_SUM_SQUARES() {}
};