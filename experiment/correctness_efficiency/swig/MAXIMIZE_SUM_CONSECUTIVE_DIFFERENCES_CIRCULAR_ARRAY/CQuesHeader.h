#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMIZE_SUM_CONSECUTIVE_DIFFERENCES_CIRCULAR_ARRAY {
public:
    int M_S_C_D_C_A_f_gold(int arr [], int n)
    { 
        int sum = 0 ; 
        sort ( arr , arr + n ) ; 
        for ( int i = 0 ; 
        i < n / 2 ; 
        i ++ ) { 
            sum -= ( 2 * arr [ i ] ) ; 
            sum += ( 2 * arr [ n - i - 1 ] ) ; 
        } 
        return sum ; 
    } 
MAXIMIZE_SUM_CONSECUTIVE_DIFFERENCES_CIRCULAR_ARRAY() {}
};