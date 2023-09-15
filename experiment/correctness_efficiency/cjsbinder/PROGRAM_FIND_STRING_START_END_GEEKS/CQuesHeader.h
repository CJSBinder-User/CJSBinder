#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_FIND_STRING_START_END_GEEKS {
public:
    bool P_F_S_S_E_G_f_gold(string str, string corner)
    { 
        int n = str . length ( ) ; 
        int cl = corner . length ( ) ; 
        if ( n < cl ) return false ; 
        return ( str . substr ( 0 , cl ) . compare ( corner ) == 0 && str . substr ( n - cl , cl ) . compare ( corner ) == 0 ) ; 
    } 
PROGRAM_FIND_STRING_START_END_GEEKS() {}
};