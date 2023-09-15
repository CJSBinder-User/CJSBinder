#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class ARRAY_RANGE_QUERIES_ELEMENTS_FREQUENCY_VALUE {
public:
    int A_R_Q_E_F_V_f_gold(int start, int end, int arr [])
    { 
        unordered_map < int , int > frequency ; 
        for ( int i = start ; 
        i <= end ; 
        i ++ ) frequency [ arr [ i ] ] ++ ; 
        int count = 0 ; 
        for ( auto x : frequency ) if ( x . first == x . second ) count ++ ; 
        return count ; 
    } 
ARRAY_RANGE_QUERIES_ELEMENTS_FREQUENCY_VALUE() {}
};