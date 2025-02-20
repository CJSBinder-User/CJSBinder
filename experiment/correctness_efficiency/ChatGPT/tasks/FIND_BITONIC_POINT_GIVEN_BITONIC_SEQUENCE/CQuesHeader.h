#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_BITONIC_POINT_GIVEN_BITONIC_SEQUENCE {
public:
    int F_B_P_G_B_S_f_gold(int arr [], int left, int right)
    { 
        if ( left <= right ) { 
            int mid = ( left + right ) / 2 ; 
            if ( mid == 0 ) return 0 ;
            if ( arr [ mid - 1 ] < arr [ mid ] && arr [ mid ] > arr [ mid + 1 ] ) return mid ; 
            if ( arr [ mid ] < arr [ mid + 1 ] ) return F_B_P_G_B_S_f_gold ( arr , mid + 1 , right ) ; 
            else return F_B_P_G_B_S_f_gold ( arr , left , mid - 1 ) ; 
        } 
        return - 1 ; 
    } 
FIND_BITONIC_POINT_GIVEN_BITONIC_SEQUENCE() {}
};