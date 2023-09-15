#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRIMALITY_TEST_SET_1_INTRODUCTION_AND_SCHOOL_METHOD_1 {
public:
    bool P_T_S_1_I_A_S_M_1_f_gold(int n)
    { 
        if ( n <= 1 ) return false ; 
        if ( n <= 3 ) return true ; 
        if ( n % 2 == 0 || n % 3 == 0 ) return false ; 
        for ( int i = 5 ; 
        i * i <= n ; 
        i = i + 6 ) if ( n % i == 0 || n % ( i + 2 ) == 0 ) return false ; 
        return true ; 
    } 
PRIMALITY_TEST_SET_1_INTRODUCTION_AND_SCHOOL_METHOD_1() {}
};