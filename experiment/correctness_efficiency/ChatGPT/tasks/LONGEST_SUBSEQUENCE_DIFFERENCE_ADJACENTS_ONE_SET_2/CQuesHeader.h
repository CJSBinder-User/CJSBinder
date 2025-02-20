#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_SUBSEQUENCE_DIFFERENCE_ADJACENTS_ONE_SET_2 {
public:
    int L_S_D_A_O_S_2_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > um ; 
        int longLen = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int len = 0 ; 
            if ( um . find ( arr [ i ] - 1 ) != um . end ( ) && len < um [ arr [ i ] - 1 ] ) len = um [ arr [ i ] - 1 ] ; 
            if ( um . find ( arr [ i ] + 1 ) != um . end ( ) && len < um [ arr [ i ] + 1 ] ) len = um [ arr [ i ] + 1 ] ; 
            um [ arr [ i ] ] = len + 1 ; 
            if ( longLen < um [ arr [ i ] ] ) longLen = um [ arr [ i ] ] ; 
        } 
        return longLen ; 
    } 
LONGEST_SUBSEQUENCE_DIFFERENCE_ADJACENTS_ONE_SET_2() {}
};