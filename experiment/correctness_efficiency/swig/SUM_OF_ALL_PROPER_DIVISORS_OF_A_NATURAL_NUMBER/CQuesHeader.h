#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_OF_ALL_PROPER_DIVISORS_OF_A_NATURAL_NUMBER {
public:
    int S_O_A_P_D_O_A_N_N_f_gold(int num)
    { 
        int result = 0 ; 
        for ( int i = 2 ; 
        i <= sqrt ( num ) ; 
        i ++ ) { 
            if ( num % i == 0 ) { 
                if ( i == ( num / i ) ) result += i ; 
                else result += ( i + num / i ) ; 
            } 
        } 
        return ( result + 1 ) ; 
    } 
SUM_OF_ALL_PROPER_DIVISORS_OF_A_NATURAL_NUMBER() {}
};