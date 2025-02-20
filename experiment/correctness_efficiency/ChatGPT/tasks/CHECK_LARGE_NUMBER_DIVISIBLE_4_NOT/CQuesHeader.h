#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_LARGE_NUMBER_DIVISIBLE_4_NOT {
public:
    bool C_L_N_D_4_N_f_gold(string str)
    { 
        int n = str . length ( ) ; 
        if ( n == 0 ) return false ; 
        if ( n == 1 ) return ( ( str [ 0 ] - '0' ) % 4 == 0 ) ; 
        int last = str [ n - 1 ] - '0' ; 
        int second_last = str [ n - 2 ] - '0' ; 
        return ( ( second_last * 10 + last ) % 4 == 0 ) ; 
    } 
CHECK_LARGE_NUMBER_DIVISIBLE_4_NOT() {}
};