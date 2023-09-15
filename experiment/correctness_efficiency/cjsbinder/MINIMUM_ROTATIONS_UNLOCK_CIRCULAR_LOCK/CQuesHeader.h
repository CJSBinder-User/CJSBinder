#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_ROTATIONS_UNLOCK_CIRCULAR_LOCK {
public:
    int M_R_U_C_L_f_gold(int input, int unlock_code)
    { 
        int rotation = 0 ; 
        int input_digit , code_digit ; 
        while ( input || unlock_code ) { 
            input_digit = input % 10 ; 
            code_digit = unlock_code % 10 ; 
            rotation += min ( abs ( input_digit - code_digit ) , 10 - abs ( input_digit - code_digit ) ) ; 
            input /= 10 ; 
            unlock_code /= 10 ; 
        } 
        return rotation ; 
    } 
MINIMUM_ROTATIONS_UNLOCK_CIRCULAR_LOCK() {}
};