#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MEDIAN_OF_TWO_SORTED_ARRAYS {
public:
    int M_O_T_S_A_f_gold(int ar1 [], int ar2 [], int n)
    { 
        int i = 0 ; 
        int j = 0 ; 
        int count ; 
        int m1 = - 1 , m2 = - 1 ; 
        for ( count = 0 ; 
        count <= n ; 
        count ++ ) { 
            if ( i == n ) { 
                m1 = m2 ; 
                m2 = ar2 [ 0 ] ; 
                break ; 
            } 
            else if ( j == n ) { 
                m1 = m2 ; 
                m2 = ar1 [ 0 ] ; 
                break ; 
            } 
            if ( ar1 [ i ] < ar2 [ j ] ) { 
                m1 = m2 ; 
                m2 = ar1 [ i ] ; 
                i ++ ; 
            } 
            else { 
                m1 = m2 ; 
                m2 = ar2 [ j ] ; 
                j ++ ; 
            } 
        } 
        return ( m1 + m2 ) / 2 ; 
    } 
MEDIAN_OF_TWO_SORTED_ARRAYS() {}
};