#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_DIGITS_REMOVED_MAKE_NUMBER_DIVISIBLE_3 {
public:
    int N_D_R_M_N_D_3_f_gold(string num)
    { 
        int n = num . length ( ) ; 
        int sum = accumulate ( begin ( num ) , end ( num ) , 0 ) - '0' * 1 ; 
        if ( sum % 3 == 0 ) return 0 ; 
        if ( n == 1 ) return - 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( sum % 3 == ( num [ i ] - '0' ) % 3 ) return 1 ; 
        if ( n == 2 ) return - 1 ; 
        return 2 ; 
    } 
NUMBER_DIGITS_REMOVED_MAKE_NUMBER_DIVISIBLE_3() {}
};