#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS {
public:
    bool C_O_S_U_A_D_L_O_f_gold(string str1, string str2, int k)
    { 
        if ( ( str1 . length ( ) + str2 . length ( ) ) < k ) return true ; 
        int commonLength = 0 ; 
        for ( int i = 0 ; 
        i < min ( str1 . length ( ) , str2 . length ( ) ) ; 
        i ++ ) { 
            if ( str1 [ i ] == str2 [ i ] ) commonLength ++ ; 
            else break ; 
        } 
        if ( ( k - str1 . length ( ) - str2 . length ( ) + 2 * commonLength ) % 2 == 0 ) return true ; 
        return false ; 
    } 
CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS() {}
};