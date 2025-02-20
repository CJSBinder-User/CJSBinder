#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class REMAINDER_7_LARGE_NUMBERS {
public:
    int R_7_L_N_f_gold(string num)
    { 
        int series [ ] = { 
            1 , 3 , 2 , - 1 , - 3 , - 2 } 
        ; 
        int series_index = 0 ; 
        int result = 0 ; 
        for ( int i = num . size ( ) - 1 ; 
        i >= 0 ; 
        i -- ) { 
            int digit = num [ i ] - '0' ; 
            result += digit * series [ series_index ] ; 
            series_index = ( series_index + 1 ) % 6 ; 
            result %= 7 ; 
        } 
        if ( result < 0 ) result = ( result + 7 ) % 7 ; 
        return result ; 
    } 
REMAINDER_7_LARGE_NUMBERS() {}
};