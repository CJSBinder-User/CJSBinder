#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MIN_FLIPS_OF_CONTINUOUS_CHARACTERS_TO_MAKE_ALL_CHARACTERS_SAME_IN_A_STRING {
public:
    int M_F_O_C_C_T_M_A_C_S_I_A_S_f_gold(string str, int n)
    { 
        char last = ' ' ; 
        int res = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( last != str [ i ] ) res ++ ; 
            last = str [ i ] ; 
        } 
        return res / 2 ; 
    } 
MIN_FLIPS_OF_CONTINUOUS_CHARACTERS_TO_MAKE_ALL_CHARACTERS_SAME_IN_A_STRING() {}
};