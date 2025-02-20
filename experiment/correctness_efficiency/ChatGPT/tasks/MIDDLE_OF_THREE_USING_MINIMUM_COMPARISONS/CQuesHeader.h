#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MIDDLE_OF_THREE_USING_MINIMUM_COMPARISONS {
public:
    int M_O_T_U_M_C_f_gold(int a, int b, int c)
    { 
        if ( ( a < b && b < c ) || ( c < b && b < a ) ) return b ; 
        else if ( ( b < a && a < c ) || ( c < a && a < b ) ) return a ; 
        else return c ; 
    } 
MIDDLE_OF_THREE_USING_MINIMUM_COMPARISONS() {}
};