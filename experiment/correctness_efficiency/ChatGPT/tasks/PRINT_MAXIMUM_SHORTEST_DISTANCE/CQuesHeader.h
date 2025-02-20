#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRINT_MAXIMUM_SHORTEST_DISTANCE {
public:
    int P_M_S_D_f_gold(int a [], int n, int k)
    { 
        unordered_map < int , int > b ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int x = a [ i ] ; 
            int d = min ( 1 + i , n - i ) ; 
            if ( b . find ( x ) == b . end ( ) ) b [ x ] = d ; 
            else b [ x ] = min ( d , b [ x ] ) ; 
        } 
        int ans = INT_MAX ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int x = a [ i ] ; 
            if ( x != k - x && b . find ( k - x ) != b . end ( ) ) ans = min ( max ( b [ x ] , b [ k - x ] ) , ans ) ; 
        } 
        return ans ; 
    } 
PRINT_MAXIMUM_SHORTEST_DISTANCE() {}
};