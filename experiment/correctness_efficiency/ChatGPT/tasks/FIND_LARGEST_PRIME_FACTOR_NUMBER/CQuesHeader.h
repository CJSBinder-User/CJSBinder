#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_LARGEST_PRIME_FACTOR_NUMBER {
public:
    long long F_L_P_F_N_f_gold(long long n)
    { 
        long long maxPrime = - 1 ; 
        while ( n % 2 == 0 ) { 
            maxPrime = 2 ; 
            n >>= 1 ; 
        } 
        for ( int i = 3 ; 
        i <= sqrt ( n ) ; 
        i += 2 ) { 
            while ( n % i == 0 ) { 
                maxPrime = i ; 
                n = n / i ; 
            } 
        } 
        if ( n > 2 ) maxPrime = n ; 
        return maxPrime ; 
    } 
FIND_LARGEST_PRIME_FACTOR_NUMBER() {}
};