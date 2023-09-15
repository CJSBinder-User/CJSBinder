#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUBARRAYS_DISTINCT_ELEMENTS {
public:
    int S_D_E_f_gold(int arr [], int n)
    { 
        unordered_set < int > s ; 
        int j = 0 , ans = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            while ( j < n && s . find ( arr [ j ] ) == s . end ( ) ) { 
                s . insert ( arr [ j ] ) ; 
                j ++ ; 
            } 
            ans += ( ( j - i ) * ( j - i + 1 ) ) / 2 ; 
            s . erase ( arr [ i ] ) ; 
        } 
        return ans ; 
    } 
SUBARRAYS_DISTINCT_ELEMENTS() {}
};