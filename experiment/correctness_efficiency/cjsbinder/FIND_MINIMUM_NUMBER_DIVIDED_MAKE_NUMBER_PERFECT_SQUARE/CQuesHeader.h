#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_MINIMUM_NUMBER_DIVIDED_MAKE_NUMBER_PERFECT_SQUARE {
public:
    int F_M_N_D_M_N_P_S_f_gold(int n)
    { 
        int count = 0 , ans = 1 ; 
        while ( n % 2 == 0 ) { 
            count ++ ; 
            n /= 2 ; 
        } 
        if ( count % 2 ) ans *= 2 ; 
        for ( int i = 3 ; 
        i <= sqrt ( n ) ; 
        i += 2 ) { 
            count = 0 ; 
            while ( n % i == 0 ) { 
                count ++ ; 
                n /= i ; 
            } 
            if ( count % 2 ) ans *= i ; 
        } 
        if ( n > 2 ) ans *= n ; 
        return ans ; 
    } 
FIND_MINIMUM_NUMBER_DIVIDED_MAKE_NUMBER_PERFECT_SQUARE() {}
};