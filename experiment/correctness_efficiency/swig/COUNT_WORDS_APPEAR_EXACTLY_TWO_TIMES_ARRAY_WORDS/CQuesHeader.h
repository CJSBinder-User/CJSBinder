#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_WORDS_APPEAR_EXACTLY_TWO_TIMES_ARRAY_WORDS {
public:
    int C_W_A_E_T_T_A_W_f_gold(string str [], int n)
    { 
        unordered_map < string , int > m ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) m [ str [ i ] ] += 1 ; 
        int res = 0 ; 
        for ( auto it = m . begin ( ) ; 
        it != m . end ( ) ; 
        it ++ ) if ( ( it -> second == 2 ) ) res ++ ; 
        return res ; 
    } 
COUNT_WORDS_APPEAR_EXACTLY_TWO_TIMES_ARRAY_WORDS() {}
};