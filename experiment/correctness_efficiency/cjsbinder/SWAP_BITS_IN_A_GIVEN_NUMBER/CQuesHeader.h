#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SWAP_BITS_IN_A_GIVEN_NUMBER {
public:
    int S_B_I_A_G_N_f_gold(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n)
    { 
        unsigned int set1 = ( x >> p1 ) & ( ( 1U << n ) - 1 ) ; 
        unsigned int set2 = ( x >> p2 ) & ( ( 1U << n ) - 1 ) ; 
        unsigned int Xor = ( set1 ^ set2 ) ; 
        Xor = ( Xor << p1 ) | ( Xor << p2 ) ; 
        unsigned int result = x ^ Xor ; 
        return result ; 
    } 
SWAP_BITS_IN_A_GIVEN_NUMBER() {}
};