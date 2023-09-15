#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class ARRAY_ELEMENT_MOVED_K_USING_SINGLE_MOVES {
public:
    int A_E_M_K_U_S_M_f_gold(int a [], int n, int k)
    { 
        if ( k >= n - 1 ) return n ; 
        int best = 0 , times = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( a [ i ] > best ) { 
                best = a [ i ] ; 
                if ( i ) times = 1 ; 
            } 
            else times += 1 ; 
            if ( times >= k ) return best ; 
        } 
        return best ; 
    } 
ARRAY_ELEMENT_MOVED_K_USING_SINGLE_MOVES() {}
};