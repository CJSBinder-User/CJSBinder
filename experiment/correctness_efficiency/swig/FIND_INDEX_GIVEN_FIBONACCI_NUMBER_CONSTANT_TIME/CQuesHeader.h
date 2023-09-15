#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_INDEX_GIVEN_FIBONACCI_NUMBER_CONSTANT_TIME {
public:
    int F_I_G_F_N_C_T_f_gold(int n)
    { 
        if ( n <= 1 ) return n ; 
        int a = 0 , b = 1 , c = 1 ; 
        int res = 1 ; 
        while ( c < n ) { 
            c = a + b ; 
            res ++ ; 
            a = b ; 
            b = c ; 
        } 
        return res ; 
    } 
FIND_INDEX_GIVEN_FIBONACCI_NUMBER_CONSTANT_TIME() {}
};