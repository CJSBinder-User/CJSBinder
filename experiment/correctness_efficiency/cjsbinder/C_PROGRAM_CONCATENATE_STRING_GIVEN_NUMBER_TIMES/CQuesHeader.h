#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class C_PROGRAM_CONCATENATE_STRING_GIVEN_NUMBER_TIMES {
public:
    string C_P_C_S_G_N_T_f_gold(string s, int n)
    { 
        string s1 = s ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) s += s1 ; 
        return s ; 
    } 
C_PROGRAM_CONCATENATE_STRING_GIVEN_NUMBER_TIMES() {}
};