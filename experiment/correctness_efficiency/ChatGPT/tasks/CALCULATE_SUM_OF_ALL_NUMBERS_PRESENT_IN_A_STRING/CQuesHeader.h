#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CALCULATE_SUM_OF_ALL_NUMBERS_PRESENT_IN_A_STRING {
public:
    int C_S_O_A_N_P_I_A_S_f_gold(string str)
    { 
        string temp = "" ; 
        int sum = 0 ; 
        for ( char ch : str ) { 
            if ( isdigit ( ch ) ) temp += ch ; 
            else { 
                sum += atoi ( temp . c_str ( ) ) ; 
                temp = "" ; 
            } 
        } 
        return sum + atoi ( temp . c_str ( ) ) ; 
    } 
CALCULATE_SUM_OF_ALL_NUMBERS_PRESENT_IN_A_STRING() {}
};