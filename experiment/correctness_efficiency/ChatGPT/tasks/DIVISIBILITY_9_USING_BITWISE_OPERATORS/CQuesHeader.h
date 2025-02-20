#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DIVISIBILITY_9_USING_BITWISE_OPERATORS {
public:
    bool D_9_U_B_O_f_gold(int n)
    { 
        if ( n == 0 || n == 9 ) return true ; 
        if ( n < 9 ) return false ; 
        return D_9_U_B_O_f_gold ( ( int ) ( n >> 3 ) - ( int ) ( n & 7 ) ) ; 
    } 
DIVISIBILITY_9_USING_BITWISE_OPERATORS() {}
};