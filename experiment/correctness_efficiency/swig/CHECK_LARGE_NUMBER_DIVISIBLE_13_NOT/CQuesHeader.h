#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_LARGE_NUMBER_DIVISIBLE_13_NOT {
public:
    bool C_L_N_D_1_N_f_gold(string num)
    { 
        int length = num . size ( ) ; 
        if ( length == 1 && num [ 0 ] == '0' ) return true ; 
        if ( length % 3 == 1 ) { 
            num += "00" ; 
            length += 2 ; 
        } 
        else if ( length % 3 == 2 ) { 
            num += "0" ; 
            length += 1 ; 
        } 
        int sum = 0 , p = 1 ; 
        for ( int i = length - 1 ; 
        i >= 0 ; 
        i -- ) { 
            int group = 0 ; 
            group += num [ i -- ] - '0' ; 
            group += ( num [ i -- ] - '0' ) * 10 ; 
            group += ( num [ i ] - '0' ) * 100 ; 
            sum = sum + group * p ; 
            p *= ( - 1 ) ; 
        } 
        sum = abs ( sum ) ; 
        return ( sum % 13 == 0 ) ; 
    } 
CHECK_LARGE_NUMBER_DIVISIBLE_13_NOT() {}
};