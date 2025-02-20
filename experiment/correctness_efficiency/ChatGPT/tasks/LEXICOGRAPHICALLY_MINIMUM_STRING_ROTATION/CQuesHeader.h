#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LEXICOGRAPHICALLY_MINIMUM_STRING_ROTATION {
public:
    string L_M_S_R_f_gold(string str)
    { 
        int n = str . length ( ) ; 
        string arr [ n ] ; 
        string concat = str + str ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) arr [ i ] = concat . substr ( i , n ) ; 
        sort ( arr , arr + n ) ; 
        return arr [ 0 ] ; 
    } 
LEXICOGRAPHICALLY_MINIMUM_STRING_ROTATION() {}
};