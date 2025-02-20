#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class QUERIES_COUNTS_ARRAY_ELEMENTS_VALUES_GIVEN_RANGE {
public:
    int Q_C_A_E_V_G_R_f_gold(int arr [], int n, int x, int y)
    { 
        int count = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] >= x && arr [ i ] <= y ) count ++ ; 
        } 
        return count ; 
    } 
QUERIES_COUNTS_ARRAY_ELEMENTS_VALUES_GIVEN_RANGE() {}
};