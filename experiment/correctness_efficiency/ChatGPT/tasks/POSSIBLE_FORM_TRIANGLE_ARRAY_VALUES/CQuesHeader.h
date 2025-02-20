#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class POSSIBLE_FORM_TRIANGLE_ARRAY_VALUES {
public:
    bool P_F_T_A_V_f_gold(int arr [], int N)
    { 
        if ( N < 3 ) return false ; 
        sort ( arr , arr + N ) ; 
        for ( int i = 0 ; 
        i < N - 2 ; 
        i ++ ) if ( arr [ i ] + arr [ i + 1 ] > arr [ i + 2 ] ) return true ; 
        return false ;
    } 
POSSIBLE_FORM_TRIANGLE_ARRAY_VALUES() {}
};