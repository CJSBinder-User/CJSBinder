#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_DIFFERENCE_PAIR_VALUES_TWO_UNSORTED_ARRAYS {
public:
    int S_D_P_V_T_U_A_f_gold(int A [], int B [], int m, int n)
    { 
        sort ( A , A + m ) ; 
        sort ( B , B + n ) ; 
        int a = 0 , b = 0 ; 
        int result = INT_MAX ; 
        while ( a < m && b < n ) { 
            if ( abs ( A [ a ] - B [ b ] ) < result ) result = abs ( A [ a ] - B [ b ] ) ; 
            if ( A [ a ] < B [ b ] ) a ++ ; 
            else b ++ ; 
        } 
        return result ; 
    } 
SMALLEST_DIFFERENCE_PAIR_VALUES_TWO_UNSORTED_ARRAYS() {}
};