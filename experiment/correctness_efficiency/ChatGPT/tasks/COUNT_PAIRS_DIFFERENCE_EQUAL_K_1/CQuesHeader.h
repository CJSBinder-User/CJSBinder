#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_PAIRS_DIFFERENCE_EQUAL_K_1 {
public:
    int C_P_D_E_K_1_f_gold(int arr [], int n, int k)
    { 
        int count = 0 ; 
        sort ( arr , arr + n ) ; 
        int l = 0 ; 
        int r = 0 ; 
        while ( r < n ) { 
            if ( arr [ r ] - arr [ l ] == k ) { 
                count ++ ; 
                l ++ ; 
                r ++ ; 
            } 
            else if ( arr [ r ] - arr [ l ] > k ) l ++ ; 
            else r ++ ; 
        } 
        return count ; 
    } 
COUNT_PAIRS_DIFFERENCE_EQUAL_K_1() {}
};