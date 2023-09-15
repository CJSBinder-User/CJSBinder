#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class RECURSIVE_C_PROGRAM_LINEARLY_SEARCH_ELEMENT_GIVEN_ARRAY {
public:
    int R_C_P_L_S_E_G_A_f_gold(int arr [], int l, int r, int x)
    { 
        if ( r < l ) return - 1 ; 
        if ( arr [ l ] == x ) return l ; 
        if ( arr [ r ] == x ) return r ; 
        return R_C_P_L_S_E_G_A_f_gold ( arr , l + 1 , r - 1 , x ) ; 
    } 
RECURSIVE_C_PROGRAM_LINEARLY_SEARCH_ELEMENT_GIVEN_ARRAY() {}
};