#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_VALUE_CHOICE_EITHER_DIVIDING_CONSIDERING {
public:
    int M_V_C_E_D_C_f_gold(int n)
    { 
        int res [ n + 1 ] ; 
        res [ 0 ] = 0 ; 
        res [ 1 ] = 1 ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) res [ i ] = max ( i , ( res [ i / 2 ] + res [ i / 3 ] + res [ i / 4 ] + res [ i / 5 ] ) ) ; 
        return res [ n ] ; 
    } 
MAXIMUM_VALUE_CHOICE_EITHER_DIVIDING_CONSIDERING() {}
};