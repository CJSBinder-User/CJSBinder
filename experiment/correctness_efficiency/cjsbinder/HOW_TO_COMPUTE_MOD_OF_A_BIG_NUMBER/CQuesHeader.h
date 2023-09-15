#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class HOW_TO_COMPUTE_MOD_OF_A_BIG_NUMBER {
public:
    int H_T_C_M_O_A_B_N_f_gold(string num, int a)
    { 
        int res = 0 ; 
        for ( int i = 0 ; 
        i < num . length ( ) ; 
        i ++ ) res = ( res * 10 + ( int ) num [ i ] - '0' ) % a ; 
        return res ; 
    } 
HOW_TO_COMPUTE_MOD_OF_A_BIG_NUMBER() {}
};