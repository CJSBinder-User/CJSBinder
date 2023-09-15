#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRIME_NUMBERS {
public:
    bool P_N_f_gold(int n)
    { 
        if ( n <= 1 ) return false ; 
        for ( int i = 2 ; 
        i < n ; 
        i ++ ) if ( n % i == 0 ) return false ; 
        return true ; 
    } 
PRIME_NUMBERS() {}
};