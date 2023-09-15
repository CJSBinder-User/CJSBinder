#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_SUM_PRODUCT_TWO_ARRAYS {
public:
    int M_S_P_T_A_f_gold(int a [], int b [], int n, int k)
    { 
        int diff = 0 , res = 0 ; 
        int temp = 0; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int pro = a [ i ] * b [ i ] ; 
            res = res + pro ; 
            if ( pro < 0 && b [ i ] < 0 ) temp = ( a [ i ] + 2 * k ) * b [ i ] ; 
            else if ( pro < 0 && a [ i ] < 0 ) temp = ( a [ i ] - 2 * k ) * b [ i ] ; 
            else if ( pro > 0 && a [ i ] < 0 ) temp = ( a [ i ] + 2 * k ) * b [ i ] ; 
            else if ( pro > 0 && a [ i ] > 0 ) temp = ( a [ i ] - 2 * k ) * b [ i ] ; 
            int d = abs ( pro - temp ) ; 
            if ( d > diff ) diff = d ; 
        } 
        return res - diff ; 
    } 
MINIMUM_SUM_PRODUCT_TWO_ARRAYS() {}
};