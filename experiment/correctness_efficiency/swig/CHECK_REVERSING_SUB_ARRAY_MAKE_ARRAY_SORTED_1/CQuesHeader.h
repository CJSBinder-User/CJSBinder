#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_REVERSING_SUB_ARRAY_MAKE_ARRAY_SORTED_1 {
public:
    bool C_R_S_A_M_A_S_1_f_gold(int arr [], int n)
    { 
        if ( n == 1 ) return true ; 
        int i ; 
        for ( i = 1 ; 
        i < n && arr [ i - 1 ] < arr [ i ] ; 
        i ++ ) ; 
        if ( i == n ) return true ; 
        int j = i ; 
        while ( arr [ j ] < arr [ j - 1 ] && j < n ) { 
            if ( i > 1 && arr [ j ] < arr [ i - 2 ] ) return false ; 
            j ++ ; 
        } 
        if ( j == n ) return true ; 
        int k = j ; 
        if ( arr [ k ] < arr [ i - 1 ] ) return false ; 
        while ( k > 1 && k < n ) { 
            if ( arr [ k ] < arr [ k - 1 ] ) return false ; 
            k ++ ; 
        } 
        return true ; 
    } 
CHECK_REVERSING_SUB_ARRAY_MAKE_ARRAY_SORTED_1() {}
};