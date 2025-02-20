#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_LENGTH_PREFIX_ONE_STRING_OCCURS_SUBSEQUENCE_ANOTHER {
public:
    int M_L_P_O_S_O_S_A_f_gold( string s , string t )
    { 
        int count = 0 ; 
        for ( int i = 0 ; 
        i < t . length ( ) ; 
        i ++ ) { 
            if ( count == s . length ( ) ) break ; 
            if ( t [ i ] == s [ count ] ) count ++ ; 
        } 
        return count ; 
    } 
MAXIMUM_LENGTH_PREFIX_ONE_STRING_OCCURS_SUBSEQUENCE_ANOTHER() {}
};
