#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class RECURSIVE_PROGRAM_PRIME_NUMBER {
public:
    bool R_P_P_N_f_gold(int n, int i)
    { 
        if ( n <= 2 ) return ( n == 2 ) ? true : false ; 
        if ( n % i == 0 ) return false ; 
        if ( i * i > n ) return true ; 
        return R_P_P_N_f_gold ( n , i + 1 ) ; 
    } 
RECURSIVE_PROGRAM_PRIME_NUMBER() {}
};