#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_CHARACTERS_POSITION_ENGLISH_ALPHABETS {
public:
    int C_C_P_E_A_f_gold(string str)
    { 
        int result = 0 ; 
        for ( int i = 0 ; 
        i < str . size ( ) ; 
        i ++ ) if ( i == ( str [ i ] - 'a' ) || i == ( str [ i ] - 'A' ) ) result ++ ; 
        return result ; 
    } 
COUNT_CHARACTERS_POSITION_ENGLISH_ALPHABETS() {}
};