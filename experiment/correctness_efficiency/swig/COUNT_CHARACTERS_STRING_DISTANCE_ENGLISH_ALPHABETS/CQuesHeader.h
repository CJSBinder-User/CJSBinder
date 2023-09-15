#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_CHARACTERS_STRING_DISTANCE_ENGLISH_ALPHABETS {
public:
    int C_C_S_D_E_A_f_gold(string str)
    { 
        int result = 0 ; 
        int n = str . length ( ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) for ( int j = i + 1 ; 
        j < n ; 
        j ++ ) if ( abs ( str [ i ] - str [ j ] ) == abs ( i - j ) ) result ++ ; 
        return result ; 
    } 
COUNT_CHARACTERS_STRING_DISTANCE_ENGLISH_ALPHABETS() {}
};