#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class STEINS_ALGORITHM_FOR_FINDING_GCD_1 {
public:
    int S_A_F_F_G_1_f_gold(int a, int b)
    { 
        if ( a == b ) return a ; 
        if ( a == 0 ) return b ; 
        if ( b == 0 ) return a ; 
        if ( ~ a & 1 ) { 
            if ( b & 1 ) return S_A_F_F_G_1_f_gold ( a >> 1 , b ) ; 
            else return S_A_F_F_G_1_f_gold ( a >> 1 , b >> 1 ) << 1 ; 
        } 
        if ( ~ b & 1 ) return S_A_F_F_G_1_f_gold ( a , b >> 1 ) ; 
        if ( a > b ) return S_A_F_F_G_1_f_gold ( ( a - b ) >> 1 , b ) ; 
        return S_A_F_F_G_1_f_gold ( ( b - a ) >> 1 , a ) ; 
    } 
STEINS_ALGORITHM_FOR_FINDING_GCD_1() {}
};