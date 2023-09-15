#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_NON_NEGATIVE_INTEGRAL_SOLUTIONS_B_C_N {
public:
    int N_N_N_I_S_B_C_N_f_gold(int n)
    { 
        int result = 0 ; 
        for ( int i = 0 ; 
        i <= n ; 
        i ++ ) for ( int j = 0 ; 
        j <= n - i ; 
        j ++ ) for ( int k = 0 ; 
        k <= ( n - i - j ) ; 
        k ++ ) if ( i + j + k == n ) result ++ ; 
        return result ; 
    } 
NUMBER_NON_NEGATIVE_INTEGRAL_SOLUTIONS_B_C_N() {}
};