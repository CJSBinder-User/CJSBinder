#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CONVERT_STRICTLY_INCREASING_ARRAY_MINIMUM_CHANGES {
public:
    int C_S_I_A_M_C_f_gold(int arr [], int n)
    { 
        int LIS [ n ] , len = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) LIS [ i ] = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j < i ; 
            j ++ ) { 
                if ( arr [ i ] > arr [ j ] && ( i - j ) <= ( arr [ i ] - arr [ j ] ) ) { 
                    LIS [ i ] = max ( LIS [ i ] , LIS [ j ] + 1 ) ; 
                } 
            } 
            len = max ( len , LIS [ i ] ) ; 
        } 
        return n - len ; 
    } 
CONVERT_STRICTLY_INCREASING_ARRAY_MINIMUM_CHANGES() {}
};