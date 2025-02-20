#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_PATTERNS_101_GIVEN_STRING {
public:
    int F_P_1_G_S_f_gold(string str)
    { 
        char last = str [ 0 ] ; 
        int i = 1 , counter = 0 ; 
        while ( i < str . size ( ) ) { 
            if ( str [ i ] == '0' && last == '1' ) { 
                while ( str [ i ] == '0' ) i ++ ; 
                if ( str [ i ] == '1' ) counter ++ ; 
            } 
            last = str [ i ] ; 
            i ++ ; 
        } 
        return counter ; 
    } 
FIND_PATTERNS_101_GIVEN_STRING() {}
};