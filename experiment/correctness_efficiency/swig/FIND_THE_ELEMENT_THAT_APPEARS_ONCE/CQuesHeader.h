#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_ELEMENT_THAT_APPEARS_ONCE {
public:
    int F_T_E_T_A_O_f_gold(int arr [], int n)
    { 
        int ones = 0 , twos = 0 ; 
        int common_bit_mask ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            twos = twos | ( ones & arr [ i ] ) ; 
            ones = ones ^ arr [ i ] ; 
            common_bit_mask = ~ ( ones & twos ) ; 
            ones &= common_bit_mask ; 
            twos &= common_bit_mask ; 
        } 
        return ones ; 
    } 
FIND_THE_ELEMENT_THAT_APPEARS_ONCE() {}
};