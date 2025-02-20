#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FREQUENT_ELEMENT_ARRAY_1 {
public:
    int F_E_A_1_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > hash ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) hash [ arr [ i ] ] ++ ; 
        int max_count = 0 , res = - 1 ; 
        for ( auto i : hash ) { 
            if ( max_count < i . second ) { 
                res = i . first ; 
                max_count = i . second ; 
            } 
        } 
        return res ; 
    } 
FREQUENT_ELEMENT_ARRAY_1() {}
};