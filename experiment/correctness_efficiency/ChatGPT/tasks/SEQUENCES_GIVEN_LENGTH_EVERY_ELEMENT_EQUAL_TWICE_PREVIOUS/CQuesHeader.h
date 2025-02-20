#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEQUENCES_GIVEN_LENGTH_EVERY_ELEMENT_EQUAL_TWICE_PREVIOUS {
public:
    int S_G_L_E_E_E_T_P_f_gold(int m, int n)
    { 
        if ( m < n ) return 0 ; 
        if ( n == 0 ) return 1 ; 
        return S_G_L_E_E_E_T_P_f_gold ( m - 1 , n ) + S_G_L_E_E_E_T_P_f_gold ( m / 2 , n - 1 ) ; 
    } 
SEQUENCES_GIVEN_LENGTH_EVERY_ELEMENT_EQUAL_TWICE_PREVIOUS() {}
};