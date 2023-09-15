#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_OCCURRENCES_CHARACTER_APPEAR_TOGETHER {
public:
    bool C_O_C_A_T_f_gold(string s, char c)
    { 
        bool oneSeen = false ; 
        int i = 0 , n = s . length ( ) ; 
        while ( i < n ) { 
            if ( s [ i ] == c ) { 
                if ( oneSeen == true ) return false ; 
                while ( i < n && s [ i ] == c ) i ++ ; 
                oneSeen = true ; 
            } 
            else i ++ ; 
        } 
        return true ; 
    } 
CHECK_OCCURRENCES_CHARACTER_APPEAR_TOGETHER() {}
};