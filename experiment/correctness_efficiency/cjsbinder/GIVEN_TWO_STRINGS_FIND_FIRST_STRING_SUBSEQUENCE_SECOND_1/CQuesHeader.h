#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class GIVEN_TWO_STRINGS_FIND_FIRST_STRING_SUBSEQUENCE_SECOND_1 {
public:
    bool G_T_S_F_F_S_S_S_1_f_gold(string str1 , string str2, int m, int n)
    { 
        int j = 0 ; 
        for ( int i = 0 ; 
        i < n && j < m ; 
        i ++ ) if ( str1 [ j ] == str2 [ i ] ) j ++ ; 
        return ( j == m ) ; 
    } 
GIVEN_TWO_STRINGS_FIND_FIRST_STRING_SUBSEQUENCE_SECOND_1() {}
};
