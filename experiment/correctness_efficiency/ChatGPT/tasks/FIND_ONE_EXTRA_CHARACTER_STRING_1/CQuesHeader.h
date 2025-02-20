#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_ONE_EXTRA_CHARACTER_STRING_1 {
public:
    char F_O_E_C_S_1_f_gold(string strA, string strB)
    { 
        int res = 0 , i ; 
        for ( i = 0 ; 
        i < strA . length ( ) ; 
        i ++ ) { 
            res ^= strA [ i ] ; 
        } 
        for ( i = 0 ; 
        i < strB . length ( ) ; 
        i ++ ) { 
            res ^= strB [ i ] ; 
        } 
        return ( ( char ) ( res ) ) ; 
    } 
FIND_ONE_EXTRA_CHARACTER_STRING_1() {}
};