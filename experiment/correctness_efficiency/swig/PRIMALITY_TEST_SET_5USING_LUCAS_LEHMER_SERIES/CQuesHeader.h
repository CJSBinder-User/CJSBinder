#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRIMALITY_TEST_SET_5USING_LUCAS_LEHMER_SERIES {
public:
    bool P_T_S_5_L_L_S_f_gold(int p)
    { 
        long long checkNumber = pow ( 2 , p ) - 1 ; 
        long long nextval = 4 % checkNumber ; 
        for ( int i = 1 ; 
        i < p - 1 ; 
        i ++ ) nextval = ( nextval * nextval - 2 ) % checkNumber ; 
        return ( nextval == 0 ) ; 
    } 
PRIMALITY_TEST_SET_5USING_LUCAS_LEHMER_SERIES() {}
};