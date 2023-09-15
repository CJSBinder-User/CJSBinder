#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class EFFICIENT_SEARCH_IN_AN_ARRAY_WHERE_DIFFERENCE_BETWEEN_ADJACENT_IS_1 {
public:
    int E_S_I_A_A_W_D_B_A_I_1_f_gold(int arr [], int n, int x)
    { 
        int i = 0 ; 
        while ( i <= n - 1 ) { 
            if ( arr [ i ] == x ) return i ; 
            i += abs ( arr [ i ] - x ) ; 
        } 
        return - 1 ; 
    } 
EFFICIENT_SEARCH_IN_AN_ARRAY_WHERE_DIFFERENCE_BETWEEN_ADJACENT_IS_1() {}
};