#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_CONSECUTIVE_REPEATING_CHARACTER_STRING_1 {
public:
    char M_C_R_C_S_1_f_gold(string str)
    { 
        int n = str . length ( ) ; 
        int count = 0 ; 
        char res = str [ 0 ] ; 
        int cur_count = 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( i < n - 1 && str [ i ] == str [ i + 1 ] ) cur_count ++ ; 
            else { 
                if ( cur_count > count ) { 
                    count = cur_count ; 
                    res = str [ i ] ; 
                } 
                cur_count = 1 ; 
            } 
        } 
        return res ; 
    } 
MAXIMUM_CONSECUTIVE_REPEATING_CHARACTER_STRING_1() {}
};