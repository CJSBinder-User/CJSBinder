#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_GIVEN_SENTENCE_GIVEN_SET_SIMPLE_GRAMMER_RULES {
public:
    bool C_G_S_G_S_S_G_R_f_gold( string str )
    { 
        int len = str . length ( ) ; 
        if ( str [ 0 ] < 'A' || str [ 0 ] > 'Z' ) return false ; 
        if ( str [ len - 1 ] != '.' ) return false ; 
        int prev_state = 0 , curr_state = 0 ; 
        int index = 1 ; 
        while ( str [ index ] ) { 
            if ( str [ index ] >= 'A' && str [ index ] <= 'Z' ) curr_state = 0 ; 
            else if ( str [ index ] == ' ' ) curr_state = 1 ; 
            else if ( str [ index ] >= 'a' && str [ index ] <= 'z' ) curr_state = 2 ; 
            else if ( str [ index ] == '.' ) curr_state = 3 ; 
            if ( prev_state == curr_state && curr_state != 2 ) return false ; 
            if ( prev_state == 2 && curr_state == 0 ) return false ; 
            if ( curr_state == 3 && prev_state != 1 ) return ( str [ index + 1 ] == '\0' ) ; 
            index ++ ; 
            prev_state = curr_state ; 
        } 
        return false ; 
    } 
CHECK_GIVEN_SENTENCE_GIVEN_SET_SIMPLE_GRAMMER_RULES() {}
};
