#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class ROUND_THE_GIVEN_NUMBER_TO_NEAREST_MULTIPLE_OF_10 {
public:
    int R_T_G_N_T_N_M_O_1_f_gold(int n)
    { 
        int a = ( n / 10 ) * 10 ; 
        int b = a + 10 ; 
        return ( n - a > b - n ) ? b : a ; 
    } 
ROUND_THE_GIVEN_NUMBER_TO_NEAREST_MULTIPLE_OF_10() {}
};