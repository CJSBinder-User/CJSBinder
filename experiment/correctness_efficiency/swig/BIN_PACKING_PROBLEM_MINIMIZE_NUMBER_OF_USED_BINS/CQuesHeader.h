#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class BIN_PACKING_PROBLEM_MINIMIZE_NUMBER_OF_USED_BINS {
public:
    int B_P_P_M_N_O_U_B_f_gold(int weight [], int n, int c)
    { 
        int res = 0 , bin_rem = c ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( weight [ i ] > bin_rem ) { 
                res ++ ; 
                bin_rem = c - weight [ i ] ; 
            } 
            else bin_rem -= weight [ i ] ; 
        } 
        return res ; 
    } 
BIN_PACKING_PROBLEM_MINIMIZE_NUMBER_OF_USED_BINS() {}
};