#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_GIVEN_STRING_CAN_SPLIT_FOUR_DISTINCT_STRINGS {
public:
    bool C_G_S_C_S_F_D_S_f_gold(string s)
    { 
        if ( s . size ( ) >= 10 ) return true ; 
        for ( int i = 1 ; 
        i < s . size ( ) ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < s . size ( ) ; 
            j ++ ) { 
                for ( int k = j + 1 ; 
                k < s . size ( ) ; 
                k ++ ) { 
                    string s1 = s . substr ( 0 , i ) ; 
                    string s2 = s . substr ( i , j - i ) ; 
                    string s3 = s . substr ( j , k - j ) ; 
                    string s4 = s . substr ( k , s . size ( ) - k ) ; 
                    if ( s1 != s2 && s1 != s3 && s1 != s4 && s2 != s3 && s2 != s4 && s3 != s4 ) return true ; 
                } 
            } 
        } 
        return false ; 
    } 
CHECK_GIVEN_STRING_CAN_SPLIT_FOUR_DISTINCT_STRINGS() {}
};