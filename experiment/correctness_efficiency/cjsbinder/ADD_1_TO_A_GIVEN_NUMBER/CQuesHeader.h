#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class ADD_1_TO_A_GIVEN_NUMBER {
public:
    int A_1_T_A_G_N_f_gold(int x)
    { 
        int m = 1 ; 
        while ( x & m ) { 
            x = x ^ m ; 
            m <<= 1 ; 
        } 
        x = x ^ m ; 
        return x ; 
    } 
ADD_1_TO_A_GIVEN_NUMBER() {}
};