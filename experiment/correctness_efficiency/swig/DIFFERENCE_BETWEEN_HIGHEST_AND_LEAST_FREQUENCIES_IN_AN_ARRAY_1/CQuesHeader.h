#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DIFFERENCE_BETWEEN_HIGHEST_AND_LEAST_FREQUENCIES_IN_AN_ARRAY_1 {
public:
    int D_B_H_A_L_F_I_A_A_1_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > hm ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) hm [ arr [ i ] ] ++ ; 
        int max_count = 0 , min_count = n ; 
        for ( auto x : hm ) { 
            max_count = max ( max_count , x . second ) ; 
            min_count = min ( min_count , x . second ) ; 
        } 
        return ( max_count - min_count ) ; 
    } 
DIFFERENCE_BETWEEN_HIGHEST_AND_LEAST_FREQUENCIES_IN_AN_ARRAY_1() {}
};