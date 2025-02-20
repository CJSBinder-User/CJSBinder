#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PERMUTE_TWO_ARRAYS_SUM_EVERY_PAIR_GREATER_EQUAL_K {
public:
    bool P_T_A_S_E_P_G_E_K_f_gold(int a [], int b [], int n, int k)
    { 
        sort ( a , a + n ) ; 
        sort ( b , b + n , greater < int > ( ) ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( a [ i ] + b [ i ] < k ) return false ; 
        return true ; 
    } 
PERMUTE_TWO_ARRAYS_SUM_EVERY_PAIR_GREATER_EQUAL_K() {}
};