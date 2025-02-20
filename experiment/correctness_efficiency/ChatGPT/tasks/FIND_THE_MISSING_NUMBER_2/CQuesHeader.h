#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_MISSING_NUMBER_2 {
public:
    int F_T_M_N_2_f_gold(int a [], int n)
    { 
        int x1 = a [ 0 ] ; 
        int x2 = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) x1 = x1 ^ a [ i ] ; 
        for ( int i = 2 ; 
        i <= n + 1 ; 
        i ++ ) x2 = x2 ^ i ; 
        return ( x1 ^ x2 ) ; 
    } 
FIND_THE_MISSING_NUMBER_2() {}
};