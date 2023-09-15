#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_NUMBER_OCCURRING_ODD_NUMBER_OF_TIMES {
public:
    int F_T_N_O_O_N_O_T_f_gold(int arr [], int arr_size)
    { 
        for ( int i = 0 ; 
        i < arr_size ; 
        i ++ ) { 
            int count = 0 ; 
            for ( int j = 0 ; 
            j < arr_size ; 
            j ++ ) { 
                if ( arr [ i ] == arr [ j ] ) count ++ ; 
            } 
            if ( count % 2 != 0 ) return arr [ i ] ; 
        } 
        return - 1 ; 
    } 
FIND_THE_NUMBER_OCCURRING_ODD_NUMBER_OF_TIMES() {}
};