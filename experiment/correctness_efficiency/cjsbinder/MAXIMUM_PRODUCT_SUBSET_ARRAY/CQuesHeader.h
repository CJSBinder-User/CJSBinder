#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_PRODUCT_SUBSET_ARRAY {
public:
    int M_P_S_A_f_gold(int a [], int n)
    { 
        if ( n == 1 ) return a [ 0 ] ; 
        int max_neg = INT_MIN ; 
        int count_neg = 0 , count_zero = 0 ; 
        int prod = 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( a [ i ] == 0 ) { 
                count_zero ++ ; 
                continue ; 
            } 
            if ( a [ i ] < 0 ) { 
                count_neg ++ ; 
                max_neg = max ( max_neg , a [ i ] ) ; 
            } 
            prod = prod * a [ i ] ; 
        } 
        if ( count_zero == n ) return 0 ; 
        if ( count_neg & 1 ) { 
            if ( count_neg == 1 && count_zero > 0 && count_zero + count_neg == n ) return 0 ; 
            prod = prod / max_neg ; 
        } 
        return prod ; 
    } 
MAXIMUM_PRODUCT_SUBSET_ARRAY() {}
};