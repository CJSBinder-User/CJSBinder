#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_ROTATIONS_REQUIRED_GET_STRING {
public:
    int M_R_R_G_S_f_gold(string str)
    { 
        string tmp = str + str ; 
        int n = str . length ( ) ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) { 
            string substring = tmp . substr ( i , str . size ( ) ) ; 
            if ( str == substring ) return i ; 
        } 
        return n ; 
    } 
MINIMUM_ROTATIONS_REQUIRED_GET_STRING() {}
};