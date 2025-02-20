#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_ARRAY_CONTAINS_CONTIGUOUS_INTEGERS_DUPLICATES_ALLOWED {
public:
    bool C_A_C_C_I_D_A_f_gold(int arr [], int n)
    { 
        int max = * max_element ( arr , arr + n ) ; 
        int min = * min_element ( arr , arr + n ) ; 
        int m = max - min + 1 ; 
        if ( m > n ) return false ; 
        bool visited [ m ] ; 
        memset ( visited , false , sizeof ( visited ) ) ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) visited [ arr [ i ] - min ] = true ; 
        for ( int i = 0 ; 
        i < m ; 
        i ++ ) if ( visited [ i ] == false ) return false ; 
        return true ; 
    } 
CHECK_ARRAY_CONTAINS_CONTIGUOUS_INTEGERS_DUPLICATES_ALLOWED() {}
};