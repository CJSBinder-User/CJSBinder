#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_DIVISIBILITY_BINARY_STRING_2K {
public:
    bool C_D_B_S_2_f_gold(string str, int k)
    { 
        int n = str . length ( ) ; 
        int c = 0 ; 
        for ( int i = 0 ; 
        i < k ; 
        i ++ ) if ( str [ n - i - 1 ] == '0' ) c ++ ; 
        return ( c == k ) ; 
    } 
CHECK_DIVISIBILITY_BINARY_STRING_2K() {}
};
