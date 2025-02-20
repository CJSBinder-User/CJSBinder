#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_TOTAL_SET_BITS_IN_ALL_NUMBERS_FROM_1_TO_N {
public:
    int C_T_S_B_I_A_N_F_1_T_N_f_gold(int n)
    { 
        int i = 0 ; 
        int ans = 0 ; 
        while ( ( 1 << i ) <= n ) { 
            bool k = 0 ; 
            int change = 1 << i ; 
            for ( int j = 0 ; 
            j <= n ; 
            j ++ ) { 
                ans += k ; 
                if ( change == 1 ) { 
                    k = ! k ; 
                    change = 1 << i ; 
                } 
                else { 
                    change -- ; 
                } 
            } 
            i ++ ; 
        } 
        return ans ; 
    } 
COUNT_TOTAL_SET_BITS_IN_ALL_NUMBERS_FROM_1_TO_N() {}
};