#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_POSSIBLE_DIFFERENCE_TWO_SUBSETS_ARRAY_1 {
public:
    int M_P_D_T_S_A_1_f_gold(int arr [], int n)
    { 
        int result = 0 ; 
        sort ( arr , arr + n ) ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) { 
            if ( arr [ i ] != arr [ i + 1 ] ) result += abs ( arr [ i ] ) ; 
            else i ++ ; 
        } 
        if ( arr [ n - 2 ] != arr [ n - 1 ] ) result += abs ( arr [ n - 1 ] ) ; 
        return result ; 
    } 
MAXIMUM_POSSIBLE_DIFFERENCE_TWO_SUBSETS_ARRAY_1() {}
};