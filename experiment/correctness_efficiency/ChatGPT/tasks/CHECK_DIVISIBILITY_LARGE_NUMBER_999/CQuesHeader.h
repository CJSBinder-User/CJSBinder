#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_DIVISIBILITY_LARGE_NUMBER_999 {
public:
    bool C_D_L_N_9_f_gold(string num)
    { 
        int n = num . length ( ) ; 
        if ( n == 0 && num [ 0 ] == '0' ) return true ; 
        if ( n % 3 == 1 ) num = "00" + num ; 
        if ( n % 3 == 2 ) num = "0" + num ; 
        int gSum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int group = 0 ; 
            group += ( num [ i ++ ] - '0' ) * 100 ; 
            group += ( num [ i ++ ] - '0' ) * 10 ; 
            group += num [ i ] - '0' ; 
            gSum += group ; 
        } 
        if ( gSum > 1000 ) { 
            num = to_string ( gSum ) ; 
            n = num . length ( ) ; 
            gSum = C_D_L_N_9_f_gold ( num ) ; 
        } 
        return ( gSum == 999 ) ; 
    } 
CHECK_DIVISIBILITY_LARGE_NUMBER_999() {}
};