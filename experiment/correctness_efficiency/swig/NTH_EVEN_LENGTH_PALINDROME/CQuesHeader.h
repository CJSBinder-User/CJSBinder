#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NTH_EVEN_LENGTH_PALINDROME {
public:
    string N_E_L_P_f_gold(string n)
    { 
        string res = n ; 
        for ( int j = n . length ( ) - 1 ; 
        j >= 0 ; 
        -- j ) res += n [ j ] ; 
        return res ; 
    } 
NTH_EVEN_LENGTH_PALINDROME() {}
};