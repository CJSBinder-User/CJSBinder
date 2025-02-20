#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_WHETHER_TRIANGLE_VALID_NOT_SIDES_GIVEN {
public:
    bool C_W_T_V_N_S_G_f_gold(int a, int b, int c)
    { 
        if ( a + b <= c || a + c <= b || b + c <= a ) return false ; 
        else return true ; 
    } 
CHECK_WHETHER_TRIANGLE_VALID_NOT_SIDES_GIVEN() {}
};