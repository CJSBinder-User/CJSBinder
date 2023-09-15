#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_OF_PAIRS_IN_AN_ARRAY_HAVING_SUM_EQUAL_TO_PRODUCT {
public:
    int N_O_P_I_A_A_H_S_E_T_P_f_gold(int a [], int n)
    { 
        int zero = 0 , two = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( a [ i ] == 0 ) { 
                zero ++ ; 
            } 
            if ( a [ i ] == 2 ) { 
                two ++ ; 
            } 
        } 
        int cnt = ( zero * ( zero - 1 ) ) / 2 + ( two * ( two - 1 ) ) / 2 ; 
        return cnt ; 
    } 
NUMBER_OF_PAIRS_IN_AN_ARRAY_HAVING_SUM_EQUAL_TO_PRODUCT() {}
};