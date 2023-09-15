#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LOWER_INSERTION_POINT {
public:
    int L_I_P_f_gold(int arr [], int n, int X)
    { 
        if ( X < arr [ 0 ] ) return 0 ; 
        else if ( X > arr [ n - 1 ] ) return n ; 
        int lowerPnt = 0 ; 
        int i = 1 ; 
        while ( i < n && arr [ i ] < X ) { 
            lowerPnt = i ; 
            i = i * 2 ; 
        } 
        while ( lowerPnt < n && arr [ lowerPnt ] < X ) lowerPnt ++ ; 
        return lowerPnt ; 
    } 
LOWER_INSERTION_POINT() {}
};