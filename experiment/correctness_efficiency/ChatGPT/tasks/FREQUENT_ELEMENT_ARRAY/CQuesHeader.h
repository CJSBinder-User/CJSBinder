#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FREQUENT_ELEMENT_ARRAY {
public:
    int F_E_A_f_gold(int arr [], int n)
    { 
        sort ( arr , arr + n ) ; 
        int max_count = 1 , res = arr [ 0 ] , curr_count = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] == arr [ i - 1 ] ) curr_count ++ ; 
            else { 
                if ( curr_count > max_count ) { 
                    max_count = curr_count ; 
                    res = arr [ i - 1 ] ; 
                } 
                curr_count = 1 ; 
            } 
        } 
        if ( curr_count > max_count ) { 
            max_count = curr_count ; 
            res = arr [ n - 1 ] ; 
        } 
        return res ; 
    } 
FREQUENT_ELEMENT_ARRAY() {}
};