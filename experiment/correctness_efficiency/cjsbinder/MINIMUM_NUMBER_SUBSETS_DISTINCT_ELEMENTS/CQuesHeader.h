#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_NUMBER_SUBSETS_DISTINCT_ELEMENTS {
public:
    int M_N_S_D_E_f_gold(int ar [], int n)
    { 
        int res = 0 ; 
        sort ( ar , ar + n ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int count = 1 ; 
            for ( ; 
            i < n - 1 ; 
            i ++ ) { 
                if ( ar [ i ] == ar [ i + 1 ] ) count ++ ; 
                else break ; 
            } 
            res = max ( res , count ) ; 
        } 
        return res ; 
    } 
MINIMUM_NUMBER_SUBSETS_DISTINCT_ELEMENTS() {}
};