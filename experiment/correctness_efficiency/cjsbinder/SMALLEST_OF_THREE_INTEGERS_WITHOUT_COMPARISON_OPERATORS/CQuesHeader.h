#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_OF_THREE_INTEGERS_WITHOUT_COMPARISON_OPERATORS {
public:
    int S_O_T_I_W_C_O_f_gold(int x, int y, int z)
    { 
        int c = 0 ; 
        while ( x && y && z ) { 
            x -- ; 
            y -- ; 
            z -- ; 
            c ++ ; 
        } 
        return c ; 
    } 
SMALLEST_OF_THREE_INTEGERS_WITHOUT_COMPARISON_OPERATORS() {}
};