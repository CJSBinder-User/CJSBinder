#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_FAI_AJ_PAIRS_ARRAY_N_INTEGERS {
public:
    int S_F_A_P_A_N_I_f_gold(int a [], int n)
    { 
        unordered_map < int , int > cnt ; 
        int ans = 0 , pre_sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            ans += ( i * a [ i ] ) - pre_sum ; 
            pre_sum += a [ i ] ; 
            if ( cnt [ a [ i ] - 1 ] ) ans -= cnt [ a [ i ] - 1 ] ; 
            if ( cnt [ a [ i ] + 1 ] ) ans += cnt [ a [ i ] + 1 ] ; 
            cnt [ a [ i ] ] ++ ; 
        } 
        return ans ; 
    } 
SUM_FAI_AJ_PAIRS_ARRAY_N_INTEGERS() {}
};