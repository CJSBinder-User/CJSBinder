#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_INDEX_PAIRS_EQUAL_ELEMENTS_ARRAY_1 {
public:
    int C_I_P_E_E_A_1_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > mp ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) mp [ arr [ i ] ] ++ ; 
        int ans = 0 ; 
        for ( auto it = mp . begin ( ) ; 
        it != mp . end ( ) ; 
        it ++ ) { 
            int count = it -> second ; 
            ans += ( count * ( count - 1 ) ) / 2 ; 
        } 
        return ans ; 
    } 
COUNT_INDEX_PAIRS_EQUAL_ELEMENTS_ARRAY_1() {}
};