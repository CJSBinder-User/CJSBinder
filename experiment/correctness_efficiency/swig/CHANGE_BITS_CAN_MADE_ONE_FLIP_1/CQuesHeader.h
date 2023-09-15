#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHANGE_BITS_CAN_MADE_ONE_FLIP_1 {
public:
    bool C_B_C_M_O_F_1_f_gold(string str)
    { 
        int sum = 0 ; 
        int n = str . length ( ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) sum += str [ i ] - '0' ; 
        return ( sum == n - 1 || sum == 1 ) ; 
    } 
CHANGE_BITS_CAN_MADE_ONE_FLIP_1() {}
};