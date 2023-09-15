#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_A_FIXED_POINT_IN_A_GIVEN_ARRAY_1 {
public:
    int F_A_F_P_I_A_G_A_1_f_gold(int arr [], int low, int high)
    { 
        if ( high >= low ) { 
            int mid = ( low + high ) / 2 ; 
            if ( mid == arr [ mid ] ) return mid ; 
            if ( mid > arr [ mid ] ) return F_A_F_P_I_A_G_A_1_f_gold ( arr , ( mid + 1 ) , high ) ; 
            else return F_A_F_P_I_A_G_A_1_f_gold ( arr , low , ( mid - 1 ) ) ; 
        } 
        return - 1 ; 
    } 
FIND_A_FIXED_POINT_IN_A_GIVEN_ARRAY_1() {}
};