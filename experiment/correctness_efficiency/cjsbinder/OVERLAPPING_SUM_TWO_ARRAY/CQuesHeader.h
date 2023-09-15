#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class OVERLAPPING_SUM_TWO_ARRAY {
public:
    int O_S_T_A_f_gold(int A [], int B [], int n)
    { 
        unordered_map < int , int > hash ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            hash [ A [ i ] ] ++ ; 
            hash [ B [ i ] ] ++ ; 
        } 
        int sum = 0 ; 
        for ( auto x : hash ) if ( x . second == 1 ) sum += x . first ; 
        return sum ; 
    } 
OVERLAPPING_SUM_TWO_ARRAY() {}
};