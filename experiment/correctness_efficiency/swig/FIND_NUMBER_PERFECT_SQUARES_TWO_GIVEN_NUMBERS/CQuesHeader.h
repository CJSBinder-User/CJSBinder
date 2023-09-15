#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_NUMBER_PERFECT_SQUARES_TWO_GIVEN_NUMBERS {
public:
    int F_N_P_S_T_G_N_f_gold(int a, int b)
    { 
        int cnt = 0 ; 
        for ( int i = a ; 
        i <= b ; 
        i ++ ) for ( int j = 1 ; 
        j * j <= i ; 
        j ++ ) if ( j * j == i ) cnt ++ ; 
        return cnt ; 
    } 
FIND_NUMBER_PERFECT_SQUARES_TWO_GIVEN_NUMBERS() {}
};