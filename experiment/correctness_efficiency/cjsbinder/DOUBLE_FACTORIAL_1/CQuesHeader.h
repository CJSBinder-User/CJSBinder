#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DOUBLE_FACTORIAL_1 {
public:
    unsigned int D_F_1_f_gold(unsigned int n)
    { 
        int res = 1 ; 
        for ( int i = n ; 
        i >= 0 ; 
        i = i - 2 ) { 
            if ( i == 0 || i == 1 ) return res ; 
            else res *= i ; 
        } 
    } 
DOUBLE_FACTORIAL_1() {}
};