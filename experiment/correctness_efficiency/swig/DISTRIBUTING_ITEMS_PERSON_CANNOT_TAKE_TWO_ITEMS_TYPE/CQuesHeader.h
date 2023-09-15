#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DISTRIBUTING_ITEMS_PERSON_CANNOT_TAKE_TWO_ITEMS_TYPE {
public:
    bool D_I_P_C_T_T_I_T_f_gold(int arr [], int n, int k)
    { 
        int count ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            count = 0 ; 
            for ( int j = 0 ; 
            j < n ; 
            j ++ ) { 
                if ( arr [ j ] == arr [ i ] ) count ++ ; 
                if ( count > 2 * k ) return false ; 
            } 
        } 
        return true ; 
    } 
DISTRIBUTING_ITEMS_PERSON_CANNOT_TAKE_TWO_ITEMS_TYPE() {}
};