#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SWAP_ALL_ODD_AND_EVEN_BITS {
public:
    unsigned int S_A_O_A_E_B_f_gold(unsigned int x)
    { 
        unsigned int even_bits = x & 0xAAAAAAAA ; 
        unsigned int odd_bits = x & 0x55555555 ; 
        even_bits >>= 1 ; 
        odd_bits <<= 1 ; 
        return ( even_bits | odd_bits ) ; 
    } 
SWAP_ALL_ODD_AND_EVEN_BITS() {}
};