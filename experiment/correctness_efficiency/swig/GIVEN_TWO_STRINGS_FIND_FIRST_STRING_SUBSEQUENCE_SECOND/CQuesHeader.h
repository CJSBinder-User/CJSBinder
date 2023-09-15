#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class GIVEN_TWO_STRINGS_FIND_FIRST_STRING_SUBSEQUENCE_SECOND {
public:
    bool G_T_S_F_F_S_S_S_f_gold(string str1 , string str2 , int m, int n)
    { 
        if ( m == 0 ) return true ; 
        if ( n == 0 ) return false ; 
        if ( str1 [ m - 1 ] == str2 [ n - 1 ] ) return G_T_S_F_F_S_S_S_f_gold ( str1 , str2 , m - 1 , n - 1 ) ; 
        return G_T_S_F_F_S_S_S_f_gold ( str1 , str2 , m , n - 1 ) ; 
    } 
GIVEN_TWO_STRINGS_FIND_FIRST_STRING_SUBSEQUENCE_SECOND() {}
};
