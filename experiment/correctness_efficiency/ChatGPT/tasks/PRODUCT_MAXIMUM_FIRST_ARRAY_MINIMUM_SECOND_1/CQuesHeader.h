#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRODUCT_MAXIMUM_FIRST_ARRAY_MINIMUM_SECOND_1 {
public:
    int P_M_F_A_M_S_1_f_gold(int arr1 [], int arr2 [], int n1, int n2)
    { 
        int max = arr1 [ 0 ] ; 
        int min = arr2 [ 0 ] ; 
        int i ; 
        for ( i = 1 ; 
        i < n1 && i < n2 ; 
        ++ i ) { 
            if ( arr1 [ i ] > max ) max = arr1 [ i ] ; 
            if ( arr2 [ i ] < min ) min = arr2 [ i ] ; 
        } 
        while ( i < n1 ) { 
            if ( arr1 [ i ] > max ) max = arr1 [ i ] ; 
            i ++ ; 
        } 
        while ( i < n2 ) { 
            if ( arr2 [ i ] < min ) min = arr2 [ i ] ; 
            i ++ ; 
        } 
        return max * min ; 
    } 
PRODUCT_MAXIMUM_FIRST_ARRAY_MINIMUM_SECOND_1() {}
};