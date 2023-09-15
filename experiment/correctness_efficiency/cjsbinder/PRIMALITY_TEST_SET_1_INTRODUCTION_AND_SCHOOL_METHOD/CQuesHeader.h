#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRIMALITY_TEST_SET_1_INTRODUCTION_AND_SCHOOL_METHOD {
public:
    bool P_T_S_1_I_A_S_M_f_gold(int n)
    { 
        if ( n <= 1 ) return false ; 
        for ( int i = 2 ; 
        i < n ; 
        i ++ ) if ( n % i == 0 ) return false ; 
        return true ; 
    } 
PRIMALITY_TEST_SET_1_INTRODUCTION_AND_SCHOOL_METHOD() {}
};