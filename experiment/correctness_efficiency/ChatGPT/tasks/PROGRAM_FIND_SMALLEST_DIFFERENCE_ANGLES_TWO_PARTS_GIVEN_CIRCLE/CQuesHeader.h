#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_FIND_SMALLEST_DIFFERENCE_ANGLES_TWO_PARTS_GIVEN_CIRCLE {
public:
    int P_F_S_D_A_T_P_G_C_f_gold(int arr [], int n)
    { 
        int l = 0 , sum = 0 , ans = 360 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            sum += arr [ i ] ; 
            while ( sum >= 180 ) { 
                ans = min ( ans , 2 * abs ( 180 - sum ) ) ; 
                sum -= arr [ l ] ; 
                l ++ ; 
            } 
            ans = min ( ans , 2 * abs ( 180 - sum ) ) ; 
        } 
        return ans ; 
    } 
PROGRAM_FIND_SMALLEST_DIFFERENCE_ANGLES_TWO_PARTS_GIVEN_CIRCLE() {}
};