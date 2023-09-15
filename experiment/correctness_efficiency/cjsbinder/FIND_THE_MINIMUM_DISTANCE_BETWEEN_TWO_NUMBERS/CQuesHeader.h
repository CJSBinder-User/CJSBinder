#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_MINIMUM_DISTANCE_BETWEEN_TWO_NUMBERS {
public:
    int F_T_M_D_B_T_N_f_gold(int arr [], int n, int x, int y)
    { 
        int i , j ; 
        int min_dist = INT_MAX ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) { 
            for ( j = i + 1 ; 
            j < n ; 
            j ++ ) { 
                if ( ( x == arr [ i ] && y == arr [ j ] || y == arr [ i ] && x == arr [ j ] ) && min_dist > abs ( i - j ) ) { 
                    min_dist = abs ( i - j ) ; 
                } 
            } 
        } 
        return min_dist ; 
    } 
FIND_THE_MINIMUM_DISTANCE_BETWEEN_TWO_NUMBERS() {}
};