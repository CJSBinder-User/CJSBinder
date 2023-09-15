#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_PRINT_SUM_GIVEN_NTH_TERM {
public:
    int P_P_S_G_N_T_f_gold(long n)
    { 
        int S = 0 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) S += i * i - ( i - 1 ) * ( i - 1 ) ; 
        return S ; 
    } 
PROGRAM_PRINT_SUM_GIVEN_NTH_TERM() {}
};