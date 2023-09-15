#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LEXICOGRAPHICAL_MAXIMUM_SUBSTRING_STRING {
public:
    string L_M_S_S_f_gold(string str)
    { 
        string mx = "" ; 
        for ( int i = 0 ; 
        i < str . length ( ) ; 
        ++ i ) mx = max ( mx , str . substr ( i ) ) ; 
        return mx ; 
    } 
LEXICOGRAPHICAL_MAXIMUM_SUBSTRING_STRING() {}
};