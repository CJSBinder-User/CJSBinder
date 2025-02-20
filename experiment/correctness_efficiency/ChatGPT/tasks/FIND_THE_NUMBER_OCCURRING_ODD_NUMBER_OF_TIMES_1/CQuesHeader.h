#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_NUMBER_OCCURRING_ODD_NUMBER_OF_TIMES_1 {
public:
    int F_T_N_O_O_N_O_T_1_f_gold(int arr [], int size)
    { 
        unordered_map < int , int > hash ; 
        for ( int i = 0 ; 
        i < size ; 
        i ++ ) { 
            hash [ arr [ i ] ] ++ ; 
        } 
        for ( auto i : hash ) { 
            if ( i . second % 2 != 0 ) { 
                return i . first ; 
            } 
        } 
        return - 1 ; 
    } 
FIND_THE_NUMBER_OCCURRING_ODD_NUMBER_OF_TIMES_1() {}
};