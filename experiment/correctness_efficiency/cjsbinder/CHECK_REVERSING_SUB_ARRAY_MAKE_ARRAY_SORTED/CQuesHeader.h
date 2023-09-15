#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_REVERSING_SUB_ARRAY_MAKE_ARRAY_SORTED {
public:
    bool C_R_S_A_M_A_S_f_gold(int arr [], int n)
    { 
        int temp [ n ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) temp [ i ] = arr [ i ] ; 
        sort ( temp , temp + n ) ; 
        int front ; 
        for ( front = 0 ; 
        front < n ; 
        front ++ ) if ( temp [ front ] != arr [ front ] ) break ; 
        int back ; 
        for ( back = n - 1 ; 
        back >= 0 ; 
        back -- ) if ( temp [ back ] != arr [ back ] ) break ; 
        if ( front >= back ) return true ; 
        do { 
            front ++ ; 
            if ( arr [ front - 1 ] < arr [ front ] ) return false ; 
        } 
        while ( front != back ) ; 
        return true ; 
    } 
CHECK_REVERSING_SUB_ARRAY_MAKE_ARRAY_SORTED() {}
};