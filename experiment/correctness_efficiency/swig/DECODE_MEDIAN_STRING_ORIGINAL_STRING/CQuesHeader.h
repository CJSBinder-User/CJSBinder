#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DECODE_MEDIAN_STRING_ORIGINAL_STRING {
public:
    string D_M_S_O_S_f_gold(string s)
    { 
        int l = s . length ( ) ; 
        string s1 = "" ; 
        bool isEven = ( l % 2 == 0 ) ? true : false ; 
        for ( int i = 0 ; 
        i < l ; 
        i += 2 ) { 
            if ( isEven ) { 
                s1 = s [ i ] + s1 ; 
                s1 += s [ i + 1 ] ; 
            } 
            else { 
                if ( l - i > 1 ) { 
                    s1 += s [ i ] ; 
                    s1 = s [ i + 1 ] + s1 ; 
                } 
                else { 
                    s1 += s [ i ] ; 
                } 
            } 
        } 
        return s1 ; 
    } 
DECODE_MEDIAN_STRING_ORIGINAL_STRING() {}
};