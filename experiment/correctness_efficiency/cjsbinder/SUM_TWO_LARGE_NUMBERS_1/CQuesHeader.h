#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_TWO_LARGE_NUMBERS_1 {
public:
    string S_T_L_N_1_f_gold(string str1, string str2)
    { 
        if ( str1 . length ( ) > str2 . length ( ) ) swap ( str1 , str2 ) ; 
        string str = "" ; 
        int n1 = str1 . length ( ) , n2 = str2 . length ( ) ; 
        int diff = n2 - n1 ; 
        int carry = 0 ; 
        for ( int i = n1 - 1 ; 
        i >= 0 ; 
        i -- ) { 
            int sum = ( ( str1 [ i ] - '0' ) + ( str2 [ i + diff ] - '0' ) + carry ) ; 
            str . push_back ( sum % 10 + '0' ) ; 
            carry = sum / 10 ; 
        } 
        for ( int i = n2 - n1 - 1 ; 
        i >= 0 ; 
        i -- ) { 
            int sum = ( ( str2 [ i ] - '0' ) + carry ) ; 
            str . push_back ( sum % 10 + '0' ) ; 
            carry = sum / 10 ; 
        } 
        if ( carry ) str . push_back ( carry + '0' ) ; 
        reverse ( str . begin ( ) , str . end ( ) ) ; 
        return str ; 
    } 
SUM_TWO_LARGE_NUMBERS_1() {}
};