#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_SUBARRAYS_EQUAL_NUMBER_1S_0S_1 {
public:
    int C_S_E_N_1_0_1_f_gold(int arr [], int n)
    { 
        map < int , int > mp ; 
        int sum = 0 ; 
        int count = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] == 0 ) arr [ i ] = - 1 ; 
            sum += arr [ i ] ; 
            if ( sum == 0 ) count ++ ; 
            if ( mp [ sum ] ) count += mp [ sum ] ; 
            if ( mp [ sum ] == 0 ) mp [ sum ] = 1 ; 
            else mp [ sum ] ++ ; 
        } 
        return count ; 
    } 
COUNT_SUBARRAYS_EQUAL_NUMBER_1S_0S_1() {}
};