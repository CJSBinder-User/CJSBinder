#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_CHARACTERS_GIVEN_STRING_CAN_REARRANGED_FORM_PALINDROME_1 {
public:
    bool C_C_G_S_C_R_F_P_1_f_gold(string str)
    { 
        vector < char > list ; 
        for ( int i = 0 ; 
        i < str . length ( ) ; 
        i ++ ) { 
            auto pos = find ( list . begin ( ) , list . end ( ) , str [ i ] ) ; 
            if ( pos != list . end ( ) ) { 
                auto posi = find ( list . begin ( ) , list . end ( ) , str [ i ] ) ; 
                list . erase ( posi ) ; 
            } 
            else list . push_back ( str [ i ] ) ; 
        } 
        if ( str . length ( ) % 2 == 0 && list . empty ( ) || ( str . length ( ) % 2 == 1 && list . size ( ) == 1 ) ) return true ; 
        else return false ; 
    } 
CHECK_CHARACTERS_GIVEN_STRING_CAN_REARRANGED_FORM_PALINDROME_1() {}
};