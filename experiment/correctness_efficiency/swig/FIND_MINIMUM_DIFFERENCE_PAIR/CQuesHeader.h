#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MINIMUM_DIFFERENCE_PAIR {
public:
    int F_M_D_P_f_gold(int arr [], int n)
    { 
        int diff = INT_MAX ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) for ( int j = i + 1 ; 
        j < n ; 
        j ++ ) if ( abs ( arr [ i ] - arr [ j ] ) < diff ) diff = abs ( arr [ i ] - arr [ j ] ) ; 
        return diff ; 
    } 
FIND_MINIMUM_DIFFERENCE_PAIR() {}
};