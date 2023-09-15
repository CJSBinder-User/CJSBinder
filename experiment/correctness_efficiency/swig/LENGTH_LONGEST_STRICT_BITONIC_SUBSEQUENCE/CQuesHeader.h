#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LENGTH_LONGEST_STRICT_BITONIC_SUBSEQUENCE {
public:
    int L_L_S_B_S_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > inc , dcr ; 
        int len_inc [ n ] , len_dcr [ n ] ; 
        int longLen = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int len = 0 ; 
            if ( inc . find ( arr [ i ] - 1 ) != inc . end ( ) ) len = inc [ arr [ i ] - 1 ] ; 
            inc [ arr [ i ] ] = len_inc [ i ] = len + 1 ; 
        } 
        for ( int i = n - 1 ; 
        i >= 0 ; 
        i -- ) { 
            int len = 0 ; 
            if ( dcr . find ( arr [ i ] - 1 ) != dcr . end ( ) ) len = dcr [ arr [ i ] - 1 ] ; 
            dcr [ arr [ i ] ] = len_dcr [ i ] = len + 1 ; 
        } 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( longLen < ( len_inc [ i ] + len_dcr [ i ] - 1 ) ) longLen = len_inc [ i ] + len_dcr [ i ] - 1 ; 
        return longLen ; 
    } 
LENGTH_LONGEST_STRICT_BITONIC_SUBSEQUENCE() {}
};