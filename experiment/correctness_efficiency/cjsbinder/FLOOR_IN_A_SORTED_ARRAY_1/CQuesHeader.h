#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FLOOR_IN_A_SORTED_ARRAY_1 {
public:
    int F_I_A_S_A_1_f_gold(int arr [], int low, int high, int x)
    { 
        if ( low > high ) return - 1 ; 
        if ( x >= arr [ high ] ) return high ; 
        int mid = ( low + high ) / 2 ; 
        if ( arr [ mid ] == x ) return mid ; 
        if ( mid > 0 && arr [ mid - 1 ] <= x && x < arr [ mid ] ) return mid - 1 ; 
        if ( x < arr [ mid ] ) return F_I_A_S_A_1_f_gold ( arr , low , mid - 1 , x ) ; 
        return F_I_A_S_A_1_f_gold ( arr , mid + 1 , high , x ) ; 
    } 
FLOOR_IN_A_SORTED_ARRAY_1() {}
};