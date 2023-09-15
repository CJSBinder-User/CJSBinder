#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_ELEMENT_BEFORE_WHICH_ALL_THE_ELEMENTS_ARE_SMALLER_THAN_IT_AND_AFTER_WHICH_ALL_ARE_GREATER_THAN_IT {
public:
    int F_T_E_B_W_A_T_E_A_S_T_I_A_A_W_A_A_G_T_I_f_gold(int arr [], int n)
    { 
        int leftMax [ n ] ; 
        leftMax [ 0 ] = INT_MIN ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) leftMax [ i ] = max ( leftMax [ i - 1 ] , arr [ i - 1 ] ) ; 
        int rightMin = INT_MAX ; 
        for ( int i = n - 1 ; 
        i >= 0 ; 
        i -- ) { 
            if ( leftMax [ i ] < arr [ i ] && rightMin > arr [ i ] ) return i ; 
            rightMin = min ( rightMin , arr [ i ] ) ; 
        } 
        return - 1 ; 
    } 
FIND_THE_ELEMENT_BEFORE_WHICH_ALL_THE_ELEMENTS_ARE_SMALLER_THAN_IT_AND_AFTER_WHICH_ALL_ARE_GREATER_THAN_IT() {}
};