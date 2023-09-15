#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SQUARE_ROOT_OF_AN_INTEGER {
public:
    int S_R_O_A_I_f_gold(int x)
    { 
        if ( x == 0 || x == 1 ) return x ; 
        int i = 1 , result = 1 ; 
        while ( result <= x ) { 
            i ++ ; 
            result = i * i ; 
        } 
        return i - 1 ; 
    } 
SQUARE_ROOT_OF_AN_INTEGER() {}
};