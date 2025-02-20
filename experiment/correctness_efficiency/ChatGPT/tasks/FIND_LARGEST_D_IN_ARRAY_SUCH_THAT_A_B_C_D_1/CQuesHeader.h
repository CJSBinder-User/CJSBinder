#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_LARGEST_D_IN_ARRAY_SUCH_THAT_A_B_C_D_1 {
public:
    int F_L_D_I_A_S_T_A_B_C_D_1_f_gold(int arr [], int n)
    { 
        unordered_map < int , pair < int , int > > mp ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) for ( int j = i + 1 ; 
        j < n ; 
        j ++ ) mp [ arr [ i ] + arr [ j ] ] = { 
            i , j } 
        ; 
        int d = INT_MIN ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < n ; 
            j ++ ) { 
                int abs_diff = abs ( arr [ i ] - arr [ j ] ) ; 
                if ( mp . find ( abs_diff ) != mp . end ( ) ) { 
                    pair < int , int > p = mp [ abs_diff ] ; 
                    if ( p . first != i && p . first != j && p . second != i && p . second != j ) d = max ( d , max ( arr [ i ] , arr [ j ] ) ) ; 
                } 
            } 
        } 
        return d ; 
    } 
FIND_LARGEST_D_IN_ARRAY_SUCH_THAT_A_B_C_D_1() {}
};