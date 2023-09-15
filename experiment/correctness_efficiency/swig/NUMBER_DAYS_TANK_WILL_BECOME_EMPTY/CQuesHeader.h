#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_DAYS_TANK_WILL_BECOME_EMPTY {
public:
    int N_D_T_W_B_E_f_gold(int C, int l)
    { 
        if ( l >= C ) return C ; 
        double eq_root = ( std :: sqrt ( 1 + 8 * ( C - l ) ) - 1 ) / 2 ; 
        return std :: ceil ( eq_root ) + l ; 
    } 
NUMBER_DAYS_TANK_WILL_BECOME_EMPTY() {}
};