#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMIZE_SUM_PRODUCT_TWO_ARRAYS_PERMUTATIONS_ALLOWED {
public:
    int M_S_P_T_A_P_A_f_gold(int A [], int B [], int n)
    { 
        sort ( A , A + n ) ; 
        sort ( B , B + n ) ; 
        int result = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) result += ( A [ i ] * B [ n - i - 1 ] ) ; 
        return result ; 
    } 
MINIMIZE_SUM_PRODUCT_TWO_ARRAYS_PERMUTATIONS_ALLOWED() {}
};