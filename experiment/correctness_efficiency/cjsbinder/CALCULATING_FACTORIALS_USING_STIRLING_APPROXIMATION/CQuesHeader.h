#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CALCULATING_FACTORIALS_USING_STIRLING_APPROXIMATION {
public:
    long C_F_U_S_A_f_gold(int n)
    { 
        if ( n == 1 ) return 1 ; 
        long int z ; 
        float e = 2.71 ; 
        z = sqrt ( 2 * 3.14 * n ) * pow ( ( n / e ) , n ) ; 
        return z ; 
    } 
CALCULATING_FACTORIALS_USING_STIRLING_APPROXIMATION() {}
};