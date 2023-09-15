#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_MINIMUM_DISTANCE_BETWEEN_TWO_NUMBERS_1 {
public:
    int F_T_M_D_B_T_N_1_f_gold(int arr [], int n, int x, int y)
    { 
        int i = 0 ; 
        int min_dist = INT_MAX ; 
        int prev ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] == x || arr [ i ] == y ) { 
                prev = i ; 
                break ; 
            } 
        } 
        for ( ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] == x || arr [ i ] == y ) { 
                if ( arr [ prev ] != arr [ i ] && ( i - prev ) < min_dist ) { 
                    min_dist = i - prev ; 
                    prev = i ; 
                } 
                else prev = i ; 
            } 
        } 
        return min_dist ; 
    } 
FIND_THE_MINIMUM_DISTANCE_BETWEEN_TWO_NUMBERS_1() {}
};