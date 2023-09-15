#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MIRROR_CHARACTERS_STRING {
public:
    string M_C_S_f_gold(string str, int n)
    { 
        string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba" ; 
        int l = str . length ( ) ; 
        for ( int i = n ; 
        i < l ; 
        i ++ ) str [ i ] = reverseAlphabet [ str [ i ] - 'a' ] ; 
        return str ; 
    } 
MIRROR_CHARACTERS_STRING() {}
};