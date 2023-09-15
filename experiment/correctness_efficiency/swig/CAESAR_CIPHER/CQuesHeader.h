#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CAESAR_CIPHER {
public:
    string C_C_f_gold(string text, int s)
    { 
        string result = "" ; 
        for ( int i = 0 ; 
        i < text . length ( ) ; 
        i ++ ) { 
            if ( isupper ( text [ i ] ) ) result += char ( int ( text [ i ] + s - 65 ) % 26 + 65 ) ; 
            else result += char ( int ( text [ i ] + s - 97 ) % 26 + 97 ) ; 
        } 
        return result ; 
    } 
CAESAR_CIPHER() {}
};