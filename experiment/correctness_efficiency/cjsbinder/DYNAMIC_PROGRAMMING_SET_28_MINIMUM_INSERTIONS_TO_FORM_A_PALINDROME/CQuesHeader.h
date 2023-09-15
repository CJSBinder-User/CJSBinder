#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_28_MINIMUM_INSERTIONS_TO_FORM_A_PALINDROME {
public:
    int D_P_S_2_M_I_T_F_A_P_f_gold(char str [], int l, int h)
    { 
        if ( l > h ) return INT_MAX ; 
        if ( l == h ) return 0 ; 
        if ( l == h - 1 ) return ( str [ l ] == str [ h ] ) ? 0 : 1 ; 
        return ( str [ l ] == str [ h ] ) ? D_P_S_2_M_I_T_F_A_P_f_gold ( str , l + 1 , h - 1 ) : ( min ( D_P_S_2_M_I_T_F_A_P_f_gold ( str , l , h - 1 ) , D_P_S_2_M_I_T_F_A_P_f_gold ( str , l + 1 , h ) ) + 1 ) ; 
    } 
DYNAMIC_PROGRAMMING_SET_28_MINIMUM_INSERTIONS_TO_FORM_A_PALINDROME() {}
};