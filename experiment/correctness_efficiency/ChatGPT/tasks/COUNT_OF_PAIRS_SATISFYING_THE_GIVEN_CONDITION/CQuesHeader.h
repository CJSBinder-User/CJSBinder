#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_OF_PAIRS_SATISFYING_THE_GIVEN_CONDITION {
public:
    int C_O_P_S_T_G_C_f_gold(int a, int b)
    { 
        string s = to_string ( b ) ; 
        int i ; 
        for ( i = 0 ; 
        i < s . length ( ) ; 
        i ++ ) { 
            if ( s [ i ] != '9' ) break ; 
        } 
        int result ; 
        if ( i == s . length ( ) ) result = a * s . length ( ) ; 
        else result = a * ( s . length ( ) - 1 ) ; 
        return result ; 
    } 
COUNT_OF_PAIRS_SATISFYING_THE_GIVEN_CONDITION() {}
};