#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_LAST_DIGIT_FACTORIAL_DIVIDES_FACTORIAL_B {
public:
    int F_L_D_F_D_F_B_f_gold(long long A, long long B)
    { 
        int variable = 1 ; 
        if ( A == B ) return 1 ; 
        else if ( ( B - A ) >= 5 ) return 0 ; 
        else { 
            for ( long long int i = A + 1 ; 
            i <= B ; 
            i ++ ) variable = ( variable * ( i % 10 ) ) % 10 ; 
            return variable % 10 ; 
        } 
    } 
FIND_LAST_DIGIT_FACTORIAL_DIVIDES_FACTORIAL_B() {}
};