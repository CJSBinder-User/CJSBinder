#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_SUM_UNIQUE_SUB_ARRAY_SUM_GIVEN_ARRAY {
public:
    long long F_S_U_S_A_S_G_A_f_gold(int arr [], int n)
    { 
        int res = 0 ; 
        unordered_map < int , int > m ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            int sum = 0 ; 
            for ( int j = i ; 
            j < n ; 
            j ++ ) { 
                sum += arr [ j ] ; 
                m [ sum ] ++ ; 
            } 
        } 
        for ( auto x : m ) if ( x . second == 1 ) res += x . first ; 
        return res ; 
    } 
FIND_SUM_UNIQUE_SUB_ARRAY_SUM_GIVEN_ARRAY() {}
};