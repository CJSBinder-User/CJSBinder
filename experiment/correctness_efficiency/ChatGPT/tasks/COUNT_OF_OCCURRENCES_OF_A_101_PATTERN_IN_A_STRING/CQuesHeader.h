#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_OF_OCCURRENCES_OF_A_101_PATTERN_IN_A_STRING {
public:
    int C_O_O_O_A_1_P_I_A_S_f_gold(string str)
    { 
        int len = str . size ( ) ; 
        bool oneSeen = 0 ; 
        int count = 0 ; 
        for ( int i = 0 ; 
        i < len ; 
        i ++ ) { 
            if ( str [ i ] == '1' && oneSeen == 1 ) if ( str [ i - 1 ] == '0' ) count ++ ; 
            if ( str [ i ] == '1' && oneSeen == 0 ) { 
                oneSeen = 1 ; 
                continue ; 
            } 
            if ( str [ i ] != '0' && str [ i ] != '1' ) oneSeen = 0 ; 
        } 
        return count ; 
    } 
COUNT_OF_OCCURRENCES_OF_A_101_PATTERN_IN_A_STRING() {}
};