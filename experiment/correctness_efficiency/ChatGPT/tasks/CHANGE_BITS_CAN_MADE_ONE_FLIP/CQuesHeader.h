#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHANGE_BITS_CAN_MADE_ONE_FLIP {
public:
    bool C_B_C_M_O_F_f_gold(string str)
    { 
        int zeros = 0 , ones = 0 ; 
        for ( char ch : str ) ( ch == '0' ) ? ++ zeros : ++ ones ; 
        return ( zeros == 1 || ones == 1 ) ; 
    } 
CHANGE_BITS_CAN_MADE_ONE_FLIP() {}
};