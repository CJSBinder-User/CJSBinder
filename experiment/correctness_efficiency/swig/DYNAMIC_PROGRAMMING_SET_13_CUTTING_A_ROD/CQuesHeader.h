#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_13_CUTTING_A_ROD {
public:
    int D_P_S_1_C_A_R_f_gold(int price [], int n)
    { 
        int val [ n + 1 ] ; 
        val [ 0 ] = 0 ; 
        int i , j ; 
        for ( i = 1 ; 
        i <= n ; 
        i ++ ) { 
            int max_val = INT_MIN ; 
            for ( j = 0 ; 
            j < i ; 
            j ++ ) max_val = max ( max_val , price [ j ] + val [ i - j - 1 ] ) ; 
            val [ i ] = max_val ; 
        } 
        return val [ n ] ; 
    } 
DYNAMIC_PROGRAMMING_SET_13_CUTTING_A_ROD() {}
};