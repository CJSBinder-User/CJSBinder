#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_NUMBER_OCCURRING_ODD_NUMBER_OF_TIMES_2 {
public:
    int F_T_N_O_O_N_O_T_2_f_gold(int ar [], int ar_size)
    { 
        int res = 0 ; 
        for ( int i = 0 ; 
        i < ar_size ; 
        i ++ ) res = res ^ ar [ i ] ; 
        return res ; 
    } 
FIND_THE_NUMBER_OCCURRING_ODD_NUMBER_OF_TIMES_2() {}
};