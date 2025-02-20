#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PERFECT_REVERSIBLE_STRING {
public:
    bool P_R_S_f_gold(string str)
    { 
        int i = 0 , j = str . length ( ) - 1 ; 
        while ( i < j ) { 
            if ( str [ i ] != str [ j ] ) return false ; 
            i ++ ; 
            j -- ; 
        } 
        return true ; 
    } 
PERFECT_REVERSIBLE_STRING() {}
};