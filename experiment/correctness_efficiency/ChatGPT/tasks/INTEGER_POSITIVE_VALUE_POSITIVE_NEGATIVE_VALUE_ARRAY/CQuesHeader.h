#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class INTEGER_POSITIVE_VALUE_POSITIVE_NEGATIVE_VALUE_ARRAY {
public:
    int I_P_V_P_N_V_A_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > hash ; 
        int maximum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] < 0 ) hash [ abs ( arr [ i ] ) ] -= 1 ; 
            else hash [ arr [ i ] ] += 1 ; 
        } 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( hash [ arr [ i ] ] != 0 ) return arr [ i ] ; 
        return - 1 ; 
    } 
INTEGER_POSITIVE_VALUE_POSITIVE_NEGATIVE_VALUE_ARRAY() {}
};