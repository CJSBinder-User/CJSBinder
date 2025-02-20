#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FORM_MINIMUM_NUMBER_FROM_GIVEN_SEQUENCE_1 {
public:
    string F_M_N_F_G_S_1_f_gold(string seq)
    { 
        int n = seq . length ( ) ; 
        if ( n >= 9 ) return "-1" ; 
        string result ( n + 1 , ' ' ) ; 
        int count = 1 ; 
        for ( int i = 0 ; 
        i <= n ; 
        i ++ ) { 
            if ( i == n || seq [ i ] == 'I' ) { 
                for ( int j = i - 1 ; 
                j >= - 1 ; 
                j -- ) { 
                    result [ j + 1 ] = '0' + count ++ ; 
                    if ( j >= 0 && seq [ j ] == 'I' ) break ; 
                } 
            } 
        } 
        return result ; 
    } 
FORM_MINIMUM_NUMBER_FROM_GIVEN_SEQUENCE_1() {}
};