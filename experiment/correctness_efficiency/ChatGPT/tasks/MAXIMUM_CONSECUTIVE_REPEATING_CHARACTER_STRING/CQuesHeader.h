#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_CONSECUTIVE_REPEATING_CHARACTER_STRING {
public:
    char M_C_R_C_S_f_gold(string str)
    { 
        int len = str . length ( ) ; 
        int count = 0 ; 
        char res = str [ 0 ] ; 
        for ( int i = 0 ; 
        i < len ; 
        i ++ ) { 
            int cur_count = 1 ; 
            for ( int j = i + 1 ; 
            j < len ; 
            j ++ ) { 
                if ( str [ i ] != str [ j ] ) break ; 
                cur_count ++ ; 
            } 
            if ( cur_count > count ) { 
                count = cur_count ; 
                res = str [ i ] ; 
            } 
        } 
        return res ; 
    } 
MAXIMUM_CONSECUTIVE_REPEATING_CHARACTER_STRING() {}
};