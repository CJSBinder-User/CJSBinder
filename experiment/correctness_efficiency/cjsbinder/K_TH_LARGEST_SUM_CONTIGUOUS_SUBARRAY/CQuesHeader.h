#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class K_TH_LARGEST_SUM_CONTIGUOUS_SUBARRAY {
public:
    int K_T_L_S_C_S_f_gold(int arr [], int n, int k)
    { 
        int sum [ n + 1 ] ; 
        sum [ 0 ] = 0 ; 
        sum [ 1 ] = arr [ 0 ] ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) sum [ i ] = sum [ i - 1 ] + arr [ i - 1 ] ; 
        priority_queue < int , vector < int > , greater < int > > Q ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) { 
            for ( int j = i ; 
            j <= n ; 
            j ++ ) { 
                int x = sum [ j ] - sum [ i - 1 ] ; 
                if ( Q . size ( ) < k ) Q . push ( x ) ; 
                else { 
                    if ( Q . top ( ) < x ) { 
                        Q . pop ( ) ; 
                        Q . push ( x ) ; 
                    } 
                } 
            } 
        } 
        return Q . top ( ) ; 
    } 
K_TH_LARGEST_SUM_CONTIGUOUS_SUBARRAY() {}
};