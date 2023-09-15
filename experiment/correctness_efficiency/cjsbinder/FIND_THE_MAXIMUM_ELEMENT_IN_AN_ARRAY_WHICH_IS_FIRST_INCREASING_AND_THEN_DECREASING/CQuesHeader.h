#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_MAXIMUM_ELEMENT_IN_AN_ARRAY_WHICH_IS_FIRST_INCREASING_AND_THEN_DECREASING {
public:
    int F_T_M_E_I_A_A_W_I_F_I_A_T_D_f_gold(int arr [], int low, int high)
    { 
        int max = arr [ low ] ; 
        int i ; 
        for ( i = low + 1 ; 
        i <= high ; 
        i ++ ) { 
            if ( arr [ i ] > max ) max = arr [ i ] ; 
            else break ; 
        } 
        return max ; 
    } 
FIND_THE_MAXIMUM_ELEMENT_IN_AN_ARRAY_WHICH_IS_FIRST_INCREASING_AND_THEN_DECREASING() {}
};