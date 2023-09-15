#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LEXICOGRAPHICALLY_NEXT_STRING {
public:
    string L_N_S_f_gold(string s)
    { 
        if ( s == "" ) return "a" ; 
        int i = s . length ( ) - 1 ; 
        while ( s [ i ] == 'z' && i >= 0 ) i -- ; 
        if ( i == - 1 ) s = s + 'a' ; 
        else s [ i ] ++ ; 
        return s ; 
    } 
LEXICOGRAPHICALLY_NEXT_STRING() {}
};