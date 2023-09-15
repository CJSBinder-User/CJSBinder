#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_WHETHER_AN_ARRAY_IS_SUBSET_OF_ANOTHER_ARRAY_SET_1_1 {
public:
    bool F_W_A_A_I_S_O_A_A_S_1_1_f_gold(int arr1 [], int arr2 [], int m, int n)
    { 
        int i = 0 , j = 0 ; 
        if ( m < n ) return 0 ; 
        sort ( arr1 , arr1 + m ) ; 
        sort ( arr2 , arr2 + n ) ; 
        while ( i < n && j < m ) { 
            if ( arr1 [ j ] < arr2 [ i ] ) j ++ ; 
            else if ( arr1 [ j ] == arr2 [ i ] ) { 
                j ++ ; 
                i ++ ; 
            } 
            else if ( arr1 [ j ] > arr2 [ i ] ) return 0 ; 
        } 
        return ( i < n ) ? false : true ; 
    } 
FIND_WHETHER_AN_ARRAY_IS_SUBSET_OF_ANOTHER_ARRAY_SET_1_1() {}
};