#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class TRIANGULAR_NUMBERS_1 {
public:
    bool T_N_1_f_gold(int num)
    { 
        if ( num < 0 ) return false ; 
        int c = ( - 2 * num ) ; 
        int b = 1 , a = 1 ; 
        int d = ( b * b ) - ( 4 * a * c ) ; 
        if ( d < 0 ) return false ; 
        float root1 = ( - b + sqrt ( d ) ) / ( 2 * a ) ; 
        float root2 = ( - b - sqrt ( d ) ) / ( 2 * a ) ; 
        if ( root1 > 0 && floor ( root1 ) == root1 ) return true ; 
        if ( root2 > 0 && floor ( root2 ) == root2 ) return true ; 
        return false ; 
    } 
TRIANGULAR_NUMBERS_1() {}
};