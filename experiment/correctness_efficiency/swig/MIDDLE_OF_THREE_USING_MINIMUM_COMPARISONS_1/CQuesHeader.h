#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MIDDLE_OF_THREE_USING_MINIMUM_COMPARISONS_1 {
public:
    int M_O_T_U_M_C_1_f_gold(int a, int b, int c)
    { 
        if ( a > b ) { 
            if ( b > c ) return b ; 
            else if ( a > c ) return c ; 
            else return a ; 
        } 
        else { 
            if ( a > c ) return a ; 
            else if ( b > c ) return c ; 
            else return b ; 
        } 
    } 
MIDDLE_OF_THREE_USING_MINIMUM_COMPARISONS_1() {}
};