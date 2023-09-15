#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_REPETITIVE_ELEMENT_1_N_1_2 {
public:
    int F_R_E_1_N_1_2_f_gold(int arr [], int n)
    { 
        int res = 0 ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) res = res ^ ( i + 1 ) ^ arr [ i ] ; 
        res = res ^ arr [ n - 1 ] ; 
        return res ; 
    } 
FIND_REPETITIVE_ELEMENT_1_N_1_2() {}
};