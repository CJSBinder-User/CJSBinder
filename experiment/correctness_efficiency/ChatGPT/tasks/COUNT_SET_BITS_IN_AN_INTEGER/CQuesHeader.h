#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_SET_BITS_IN_AN_INTEGER {
public:
    unsigned int C_S_B_I_A_I_f_gold(unsigned int n)
    { 
        unsigned int count = 0 ; 
        while ( n ) { 
            count += n & 1 ; 
            n >>= 1 ; 
        } 
        return count ; 
    } 
COUNT_SET_BITS_IN_AN_INTEGER() {}
};