#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_MANHATTAN_DISTANCES_PAIRS_POINTS {
public:
    int S_M_D_P_P_f_gold(int x [], int y [], int n)
    { 
        int sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = i + 1 ; 
        j < n ; 
        j ++ ) sum += ( abs ( x [ i ] - x [ j ] ) + abs ( y [ i ] - y [ j ] ) ) ; 
        return sum ; 
    } 
SUM_MANHATTAN_DISTANCES_PAIRS_POINTS() {}
};