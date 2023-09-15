#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_SMALLEST_VALUE_REPRESENTED_SUM_SUBSET_GIVEN_ARRAY {
public:
    int F_S_V_R_S_S_G_A_f_gold(int arr [], int n)
    { 
        int res = 1 ; 
        for ( int i = 0 ; 
        i < n && arr [ i ] <= res ; 
        i ++ ) res = res + arr [ i ] ; 
        return res ; 
    } 
FIND_SMALLEST_VALUE_REPRESENTED_SUM_SUBSET_GIVEN_ARRAY() {}
};