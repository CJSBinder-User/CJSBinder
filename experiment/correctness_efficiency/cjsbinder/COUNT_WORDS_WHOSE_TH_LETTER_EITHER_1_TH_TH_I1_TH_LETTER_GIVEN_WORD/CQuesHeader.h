#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_WORDS_WHOSE_TH_LETTER_EITHER_1_TH_TH_I1_TH_LETTER_GIVEN_WORD {
public:
    int C_W_W_T_L_E_1_T_T_I_T_L_G_W_f_gold( string str , int len)
    { 
        int count = 1 ; 
        if ( len == 1 ) return count ; 
        if ( str [ 0 ] == str [ 1 ] ) count *= 1 ; 
        else count *= 2 ; 
        for ( int j = 1 ; 
        j < len - 1 ; 
        j ++ ) { 
            if ( str [ j ] == str [ j - 1 ] && str [ j ] == str [ j + 1 ] ) count *= 1 ; 
            else if ( str [ j ] == str [ j - 1 ] || str [ j ] == str [ j + 1 ] || str [ j - 1 ] == str [ j + 1 ] ) count *= 2 ; 
            else count *= 3 ; 
        } 
        if ( str [ len - 1 ] == str [ len - 2 ] ) count *= 1 ; 
        else count *= 2 ; 
        return count ; 
    } 
COUNT_WORDS_WHOSE_TH_LETTER_EITHER_1_TH_TH_I1_TH_LETTER_GIVEN_WORD() {}
};
