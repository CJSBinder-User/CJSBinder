#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_FACTORS_NUMBER {
public:
    int S_F_N_f_gold(int n)
    { 
        int result = 0 ; 
        for ( int i = 2 ; 
        i <= sqrt ( n ) ; 
        i ++ ) { 
            if ( n % i == 0 ) { 
                if ( i == ( n / i ) ) result += i ; 
                else result += ( i + n / i ) ; 
            } 
        } 
        return ( result + n + 1 ) ; 
    } 
SUM_FACTORS_NUMBER() {}
};