#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class BREAKING_NUMBER_FIRST_PART_INTEGRAL_DIVISION_SECOND_POWER_10 {
public:
    int B_N_F_P_I_D_S_P_1_f_gold(string N)
    { 
        int len = N . length ( ) ; 
        int l = ( len ) / 2 ; 
        int count = 0 ; 
        for ( int i = 1 ; 
        i <= l ; 
        i ++ ) { 
            string s = N . substr ( 0 , i ) ; 
            int l1 = s . length ( ) ; 
            string t = N . substr ( i , l1 ) ; 
            if ( s [ 0 ] == '0' || t [ 0 ] == '0' ) continue ; 
            if ( s . compare ( t ) == 0 ) count ++ ; 
        } 
        return count ; 
    } 
BREAKING_NUMBER_FIRST_PART_INTEGRAL_DIVISION_SECOND_POWER_10() {}
};