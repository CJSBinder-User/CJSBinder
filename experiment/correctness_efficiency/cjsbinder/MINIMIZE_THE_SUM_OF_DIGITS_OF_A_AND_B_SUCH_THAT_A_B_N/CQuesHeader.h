#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMIZE_THE_SUM_OF_DIGITS_OF_A_AND_B_SUCH_THAT_A_B_N {
public:
    int M_T_S_O_D_O_A_A_B_S_T_A_B_N_f_gold(int n)
    { 
        int sum = 0 ; 
        while ( n > 0 ) { 
            sum += ( n % 10 ) ; 
            n /= 10 ; 
        } 
        if ( sum == 1 ) return 10 ; 
        return sum ; 
    } 
MINIMIZE_THE_SUM_OF_DIGITS_OF_A_AND_B_SUCH_THAT_A_B_N() {}
};