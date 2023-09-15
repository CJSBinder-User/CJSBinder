#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MAXIMUM_PRODUCT_OF_A_TRIPLET_IN_ARRAY_1 {
public:
    int F_M_P_O_A_T_I_A_1_f_gold(int arr [], int n)
    { 
        if ( n < 3 ) return - 1 ; 
        sort ( arr , arr + n ) ; 
        return max ( arr [ 0 ] * arr [ 1 ] * arr [ n - 1 ] , arr [ n - 1 ] * arr [ n - 2 ] * arr [ n - 3 ] ) ; 
    } 
FIND_MAXIMUM_PRODUCT_OF_A_TRIPLET_IN_ARRAY_1() {}
};