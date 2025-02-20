#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_WHETHER_AN_ARRAY_IS_SUBSET_OF_ANOTHER_ARRAY_SET_1 {
public:
    bool F_W_A_A_I_S_O_A_A_S_1_f_gold(int arr1 [], int arr2 [], int m, int n)
    { 
        int i = 0 ; 
        int j = 0 ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) { 
            for ( j = 0 ; 
            j < m ; 
            j ++ ) { 
                if ( arr2 [ i ] == arr1 [ j ] ) break ; 
            } 
            if ( j == m ) return 0 ; 
        } 
        return 1 ; 
    } 
FIND_WHETHER_AN_ARRAY_IS_SUBSET_OF_ANOTHER_ARRAY_SET_1() {}
};