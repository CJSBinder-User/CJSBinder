#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_XOR_VALUE_PAIR {
public:
    int M_X_V_P_f_gold(int arr [], int n)
    { 
        int min_xor = INT_MAX ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = i + 1 ; 
        j < n ; 
        j ++ ) min_xor = min ( min_xor , arr [ i ] ^ arr [ j ] ) ; 
        return min_xor ; 
    } 
MINIMUM_XOR_VALUE_PAIR() {}
};