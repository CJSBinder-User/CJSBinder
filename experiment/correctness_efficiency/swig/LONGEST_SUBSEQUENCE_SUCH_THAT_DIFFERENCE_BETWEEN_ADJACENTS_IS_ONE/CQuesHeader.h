#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_SUBSEQUENCE_SUCH_THAT_DIFFERENCE_BETWEEN_ADJACENTS_IS_ONE {
public:
    int L_S_S_T_D_B_A_I_O_f_gold(int arr [], int n)
    { 
        int dp [ n ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) dp [ i ] = 1 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j < i ; 
            j ++ ) { 
                if ( ( arr [ i ] == arr [ j ] + 1 ) || ( arr [ i ] == arr [ j ] - 1 ) ) dp [ i ] = max ( dp [ i ] , dp [ j ] + 1 ) ; 
            } 
        } 
        int result = 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( result < dp [ i ] ) result = dp [ i ] ; 
        return result ; 
    } 
LONGEST_SUBSEQUENCE_SUCH_THAT_DIFFERENCE_BETWEEN_ADJACENTS_IS_ONE() {}
};