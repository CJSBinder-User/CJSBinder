#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class STRING_CONTAINING_FIRST_LETTER_EVERY_WORD_GIVEN_STRING_SPACES {
public:
    string S_C_F_L_E_W_G_S_S_f_gold(string str)
    { 
        string result = "" ; 
        bool v = true ; 
        for ( int i = 0 ; 
        i < str . length ( ) ; 
        i ++ ) { 
            if ( str [ i ] == ' ' ) v = true ; 
            else if ( str [ i ] != ' ' && v == true ) { 
                result . push_back ( str [ i ] ) ; 
                v = false ; 
            } 
        } 
        return result ; 
    } 
STRING_CONTAINING_FIRST_LETTER_EVERY_WORD_GIVEN_STRING_SPACES() {}
};