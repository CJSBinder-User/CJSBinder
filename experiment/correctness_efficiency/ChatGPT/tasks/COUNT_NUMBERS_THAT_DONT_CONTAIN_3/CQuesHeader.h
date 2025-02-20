#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBERS_THAT_DONT_CONTAIN_3 {
public:
    int C_N_T_D_C_3_f_gold(int n)
    { 
        if ( n < 3 ) return n ; 
        if ( n >= 3 && n < 10 ) return n - 1 ; 
        int po = 1 ; 
        while ( n / po > 9 ) po = po * 10 ; 
        int msd = n / po ; 
        if ( msd != 3 ) return C_N_T_D_C_3_f_gold ( msd ) * C_N_T_D_C_3_f_gold ( po - 1 ) + C_N_T_D_C_3_f_gold ( msd ) + C_N_T_D_C_3_f_gold ( n % po ) ; 
        else return C_N_T_D_C_3_f_gold ( msd * po - 1 ) ; 
    } 
COUNT_NUMBERS_THAT_DONT_CONTAIN_3() {}
};