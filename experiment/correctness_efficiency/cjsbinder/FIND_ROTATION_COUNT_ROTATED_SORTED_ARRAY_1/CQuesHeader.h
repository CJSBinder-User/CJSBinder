#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_ROTATION_COUNT_ROTATED_SORTED_ARRAY_1 {
public:
    int F_R_C_R_S_A_1_f_gold(int arr [], int low, int high)
    { 
        if ( high < low ) return 0 ; 
        if ( high == low ) return low ; 
        int mid = low + ( high - low ) / 2 ; 
        if ( mid < high && arr [ mid + 1 ] < arr [ mid ] ) return ( mid + 1 ) ; 
        if ( mid > low && arr [ mid ] < arr [ mid - 1 ] ) return mid ; 
        if ( arr [ high ] > arr [ mid ] ) return F_R_C_R_S_A_1_f_gold ( arr , low , mid - 1 ) ; 
        return F_R_C_R_S_A_1_f_gold ( arr , mid + 1 , high ) ; 
    } 
FIND_ROTATION_COUNT_ROTATED_SORTED_ARRAY_1() {}
};