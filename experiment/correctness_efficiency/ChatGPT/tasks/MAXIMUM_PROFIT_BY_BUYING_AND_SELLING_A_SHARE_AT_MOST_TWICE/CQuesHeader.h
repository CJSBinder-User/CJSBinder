#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_PROFIT_BY_BUYING_AND_SELLING_A_SHARE_AT_MOST_TWICE {
public:
    int M_P_B_B_A_S_A_S_A_M_T_f_gold(int price [], int n)
    { 
        int * profit = new int [ n ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) profit [ i ] = 0 ; 
        int max_price = price [ n - 1 ] ; 
        for ( int i = n - 2 ; 
        i >= 0 ; 
        i -- ) { 
            if ( price [ i ] > max_price ) max_price = price [ i ] ; 
            profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] ) ; 
        } 
        int min_price = price [ 0 ] ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            if ( price [ i ] < min_price ) min_price = price [ i ] ; 
            profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) ) ; 
        } 
        int result = profit [ n - 1 ] ; 
        delete [ ] profit ; 
        return result ; 
    } 
MAXIMUM_PROFIT_BY_BUYING_AND_SELLING_A_SHARE_AT_MOST_TWICE() {}
};