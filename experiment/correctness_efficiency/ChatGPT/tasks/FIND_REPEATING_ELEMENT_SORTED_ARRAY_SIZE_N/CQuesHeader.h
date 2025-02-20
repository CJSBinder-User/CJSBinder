#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_REPEATING_ELEMENT_SORTED_ARRAY_SIZE_N {
public:
    int F_R_E_S_A_S_N_f_gold(int arr [], int low, int high)
    { 
        if ( low > high ) return - 1 ; 
        int mid = ( low + high ) / 2 ; 
        if ( arr [ mid ] != mid + 1 ) { 
            if ( mid > 0 && arr [ mid ] == arr [ mid - 1 ] ) return mid ; 
            return F_R_E_S_A_S_N_f_gold ( arr , low , mid - 1 ) ; 
        } 
        return F_R_E_S_A_S_N_f_gold ( arr , mid + 1 , high ) ; 
    } 
FIND_REPEATING_ELEMENT_SORTED_ARRAY_SIZE_N() {}
};