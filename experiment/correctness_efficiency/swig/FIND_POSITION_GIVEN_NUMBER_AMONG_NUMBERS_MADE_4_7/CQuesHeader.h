#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_POSITION_GIVEN_NUMBER_AMONG_NUMBERS_MADE_4_7 {
public:
    int F_P_G_N_A_N_M_4_7_f_gold(string n)
    { 
        int i = 0 , pos = 0 ; 
        while ( n [ i ] != '\0' ) { 
            switch ( n [ i ] ) { 
                case '4' : pos = pos * 2 + 1 ; 
                break ; 
                case '7' : pos = pos * 2 + 2 ; 
                break ; 
            } 
            i ++ ; 
        } 
        return pos ; 
    } 
FIND_POSITION_GIVEN_NUMBER_AMONG_NUMBERS_MADE_4_7() {}
};