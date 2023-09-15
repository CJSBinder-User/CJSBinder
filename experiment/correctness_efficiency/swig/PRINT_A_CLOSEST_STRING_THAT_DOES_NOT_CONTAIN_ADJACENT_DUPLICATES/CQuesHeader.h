#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRINT_A_CLOSEST_STRING_THAT_DOES_NOT_CONTAIN_ADJACENT_DUPLICATES {
public:
    string P_A_C_S_T_D_N_C_A_D_f_gold(string s)
    { 
        int n = s . length ( ) ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            if ( s [ i ] == s [ i - 1 ] ) { 
                s [ i ] = 'a' ; 
                while ( s [ i ] == s [ i - 1 ] || ( i + 1 < n && s [ i ] == s [ i + 1 ] ) ) s [ i ] ++ ; 
                i ++ ; 
            } 
        } 
        return s ; 
    } 
PRINT_A_CLOSEST_STRING_THAT_DOES_NOT_CONTAIN_ADJACENT_DUPLICATES() {}
};