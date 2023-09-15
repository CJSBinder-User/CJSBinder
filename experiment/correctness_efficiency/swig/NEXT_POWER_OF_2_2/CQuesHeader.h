#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NEXT_POWER_OF_2_2 {
public:
    unsigned int N_P_O_2_2_f_gold(unsigned int n)
    { 
        n -- ; 
        n |= n >> 1 ; 
        n |= n >> 2 ; 
        n |= n >> 4 ; 
        n |= n >> 8 ; 
        n |= n >> 16 ; 
        n ++ ; 
        return n ; 
    } 
NEXT_POWER_OF_2_2() {}
};