#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRINT_WORDS_STRING_REVERSE_ORDER {
public:
    string P_W_S_R_O_f_gold(string str)
    { 
        int i = str . length ( ) - 1 ; 
        int start , end = i + 1 ; 
        string result = "" ; 
        while ( i >= 0 ) { 
            if ( str [ i ] == ' ' ) { 
                start = i + 1 ; 
                while ( start != end ) result += str [ start ++ ] ; 
                result += ' ' ; 
                end = i ; 
            } 
            i -- ; 
        } 
        start = 0 ; 
        while ( start != end ) result += str [ start ++ ] ; 
        return result ; 
    } 
PRINT_WORDS_STRING_REVERSE_ORDER() {}
};