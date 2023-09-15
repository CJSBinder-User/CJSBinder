#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIBONACCI_MODULO_P {
public:
    int F_M_P_f_gold(int p)
    { 
        int first = 1 , second = 1 , number = 2 , next = 1 ; 
        while ( next ) { 
            next = ( first + second ) % p ; 
            first = second ; 
            second = next ; 
            number ++ ; 
        } 
        return number ; 
    } 
FIBONACCI_MODULO_P() {}
};