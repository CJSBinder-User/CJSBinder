#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MINIMUM_ELEMENT_IN_A_SORTED_AND_ROTATED_ARRAY {
public:
    int F_M_E_I_A_S_A_R_A_f_gold(int arr [], int low, int high)
    { 
        if ( high < low ) return arr [ 0 ] ; 
        if ( high == low ) return arr [ low ] ; 
        int mid = low + ( high - low ) / 2 ; 
        if ( mid < high && arr [ mid + 1 ] < arr [ mid ] ) return arr [ mid + 1 ] ; 
        if ( mid > low && arr [ mid ] < arr [ mid - 1 ] ) return arr [ mid ] ; 
        if ( arr [ high ] > arr [ mid ] ) return F_M_E_I_A_S_A_R_A_f_gold ( arr , low , mid - 1 ) ; 
        return F_M_E_I_A_S_A_R_A_f_gold ( arr , mid + 1 , high ) ; 
    } 
FIND_MINIMUM_ELEMENT_IN_A_SORTED_AND_ROTATED_ARRAY() {}
};