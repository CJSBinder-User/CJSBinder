#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class ANALYSIS_OF_ALGORITHMS_SET_2_ASYMPTOTIC_ANALYSIS {
public:
    int A_O_A_S_2_A_A_f_gold(int arr [], int n, int x)
    { 
        int i ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] == x ) return i ; 
        } 
        return - 1 ; 
    } 
ANALYSIS_OF_ALGORITHMS_SET_2_ASYMPTOTIC_ANALYSIS() {}
};