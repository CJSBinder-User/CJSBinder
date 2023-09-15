#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class GOOGLE_CASE_GIVEN_SENTENCE {
public:
    string G_C_G_S_f_gold(string s)
    { 
        int n = s . length ( ) ; 
        s [ 0 ] = tolower ( s [ 0 ] ) ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            if ( s [ i ] == ' ' && i < n ) { 
                s [ i + 1 ] = tolower ( s [ i + 1 ] ) ; 
                i ++ ; 
            } 
            else s [ i ] = toupper ( s [ i ] ) ; 
        } 
        return s ; 
    } 
GOOGLE_CASE_GIVEN_SENTENCE() {}
};