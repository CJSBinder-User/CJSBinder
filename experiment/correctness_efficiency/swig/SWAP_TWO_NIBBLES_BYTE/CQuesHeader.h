#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SWAP_TWO_NIBBLES_BYTE {
public:
    int S_T_N_B_f_gold(int x)
    { 
        return ( ( x & 0x0F ) << 4 | ( x & 0xF0 ) >> 4 ) ; 
    } 
SWAP_TWO_NIBBLES_BYTE() {}
};