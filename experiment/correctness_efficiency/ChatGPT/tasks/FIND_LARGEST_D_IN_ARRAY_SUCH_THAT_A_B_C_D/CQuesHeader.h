#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_LARGEST_D_IN_ARRAY_SUCH_THAT_A_B_C_D {
public:
    int F_L_D_I_A_S_T_A_B_C_D_f_gold(int S [], int n)
    { 
        bool found = false ; 
        sort ( S , S + n ) ; 
        for ( int i = n - 1 ; 
        i >= 0 ; 
        i -- ) { 
            for ( int j = 0 ; 
            j < n ; 
            j ++ ) { 
                if ( i == j ) continue ; 
                for ( int k = j + 1 ; 
                k < n ; 
                k ++ ) { 
                    if ( i == k ) continue ; 
                    for ( int l = k + 1 ; 
                    l < n ; 
                    l ++ ) { 
                        if ( i == l ) continue ; 
                        if ( S [ i ] == S [ j ] + S [ k ] + S [ l ] ) { 
                            found = true ; 
                            return S [ i ] ; 
                        } 
                    } 
                } 
            } 
        } 
        if ( found == false ) return INT_MIN ; 
    } 
FIND_LARGEST_D_IN_ARRAY_SUCH_THAT_A_B_C_D() {}
};