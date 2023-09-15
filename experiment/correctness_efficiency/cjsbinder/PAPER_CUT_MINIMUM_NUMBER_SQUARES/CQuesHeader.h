#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PAPER_CUT_MINIMUM_NUMBER_SQUARES {
public:
    int P_C_M_N_S_f_gold(int a, int b)
    { 
        long long result = 0 , rem = 0 ; 
        if ( a < b ) swap ( a , b ) ; 
        while ( b > 0 ) { 
            result += a / b ; 
            long long rem = a % b ; 
            a = b ; 
            b = rem ; 
        } 
        return result ; 
    } 
PAPER_CUT_MINIMUM_NUMBER_SQUARES() {}
};