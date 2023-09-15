#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class POSITION_OF_RIGHTMOST_SET_BIT_1 {
public:
    int P_O_R_S_B_1_f_gold(int n)
    { 
        int position = 1 ; 
        int m = 1 ; 
        while ( ! ( n & m ) ) { 
            m = m << 1 ; 
            position ++ ; 
        } 
        return position ; 
    } 
POSITION_OF_RIGHTMOST_SET_BIT_1() {}
};