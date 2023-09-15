#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class ELEMENTS_TO_BE_ADDED_SO_THAT_ALL_ELEMENTS_OF_A_RANGE_ARE_PRESENT_IN_ARRAY {
public:
    int E_T_B_A_S_T_A_E_O_A_R_A_P_I_A_f_gold(int arr [], int n)
    { 
        int count = 0 ; 
        sort ( arr , arr + n ) ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) if ( arr [ i ] != arr [ i + 1 ] && arr [ i ] != arr [ i + 1 ] - 1 ) count += arr [ i + 1 ] - arr [ i ] - 1 ; 
        return count ; 
    } 
ELEMENTS_TO_BE_ADDED_SO_THAT_ALL_ELEMENTS_OF_A_RANGE_ARE_PRESENT_IN_ARRAY() {}
};