#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MIDDLE_OF_THREE_USING_MINIMUM_COMPARISONS_2 {
public:
    int M_O_T_U_M_C_2_f_gold(int a, int b, int c)
    { 
        int x = a - b ; 
        int y = b - c ; 
        int z = a - c ; 
        if ( x * y > 0 ) return b ; 
        else if ( x * z > 0 ) return c ; 
        else return a ; 
    } 
MIDDLE_OF_THREE_USING_MINIMUM_COMPARISONS_2() {}
};