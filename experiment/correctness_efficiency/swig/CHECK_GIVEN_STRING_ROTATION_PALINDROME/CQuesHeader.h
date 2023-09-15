#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_GIVEN_STRING_ROTATION_PALINDROME {
public:
    bool C_G_S_R_P_f_gold(string str)
    { 
        int l = 0 ; 
        int h = str . length ( ) - 1 ; 
        while ( h > l ) if ( str [ l ++ ] != str [ h -- ] ) return false ; 
        return true ; 
    } 
CHECK_GIVEN_STRING_ROTATION_PALINDROME() {}
};