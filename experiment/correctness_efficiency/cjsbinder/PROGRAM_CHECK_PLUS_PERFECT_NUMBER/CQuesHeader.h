#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_CHECK_PLUS_PERFECT_NUMBER {
public:
    bool P_C_P_P_N_f_gold(int x)
    { 
        int temp = x ; 
        int n = 0 ; 
        while ( x != 0 ) { 
            x /= 10 ; 
            n ++ ; 
        } 
        x = temp ; 
        int sum = 0 ; 
        while ( x != 0 ) { 
            sum += pow ( x % 10 , n ) ; 
            x /= 10 ; 
        } 
        return ( sum == temp ) ; 
    } 
PROGRAM_CHECK_PLUS_PERFECT_NUMBER() {}
};