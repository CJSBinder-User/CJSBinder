#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_CHARACTERS_ADDED_FRONT_MAKE_STRING_PALINDROME {
public:
    bool M_C_A_F_M_S_P_f_gold(string s)
    { 
        int l = s . length ( ) ; 
        int j ; 
        for ( int i = 0 , j = l - 1 ; 
        i <= j ; 
        i ++ , j -- ) { 
            if ( s [ i ] != s [ j ] ) return false ; 
        } 
        return true ; 
    } 
MINIMUM_CHARACTERS_ADDED_FRONT_MAKE_STRING_PALINDROME() {}
};