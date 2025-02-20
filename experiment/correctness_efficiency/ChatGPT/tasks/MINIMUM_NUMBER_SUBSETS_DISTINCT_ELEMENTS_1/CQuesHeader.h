#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_NUMBER_SUBSETS_DISTINCT_ELEMENTS_1 {
public:
    int M_N_S_D_E_1_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > mp ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) mp [ arr [ i ] ] ++ ; 
        int res = 0 ; 
        for ( auto x : mp ) res = max ( res , x . second ) ; 
        return res ; 
    } 
MINIMUM_NUMBER_SUBSETS_DISTINCT_ELEMENTS_1() {}
};