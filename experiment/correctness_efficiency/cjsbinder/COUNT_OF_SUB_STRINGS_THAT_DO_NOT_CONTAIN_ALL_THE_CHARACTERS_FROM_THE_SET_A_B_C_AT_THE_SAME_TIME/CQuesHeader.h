#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_OF_SUB_STRINGS_THAT_DO_NOT_CONTAIN_ALL_THE_CHARACTERS_FROM_THE_SET_A_B_C_AT_THE_SAME_TIME {
public:
    int C_O_S_S_T_D_N_C_A_T_C_F_T_S_A_B_C_A_T_S_T_f_gold(char str [], int n)
    { 
        int ans = ( n * ( n + 1 ) ) / 2 ; 
        int a_index = 0 ; 
        int b_index = 0 ; 
        int c_index = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( str [ i ] == 'a' ) { 
                a_index = i + 1 ; 
                ans -= min ( b_index , c_index ) ; 
            } 
            else if ( str [ i ] == 'b' ) { 
                b_index = i + 1 ; 
                ans -= min ( a_index , c_index ) ; 
            } 
            else { 
                c_index = i + 1 ; 
                ans -= min ( a_index , b_index ) ; 
            } 
        } 
        return ans ; 
    } 
COUNT_OF_SUB_STRINGS_THAT_DO_NOT_CONTAIN_ALL_THE_CHARACTERS_FROM_THE_SET_A_B_C_AT_THE_SAME_TIME() {}
};