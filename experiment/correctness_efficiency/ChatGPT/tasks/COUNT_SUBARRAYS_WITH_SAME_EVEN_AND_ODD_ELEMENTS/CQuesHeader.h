#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_SUBARRAYS_WITH_SAME_EVEN_AND_ODD_ELEMENTS {
public:
    int C_S_W_S_E_A_O_E_f_gold(int arr [], int n)
    { 
        int difference = 0 ; 
        int ans = 0 ; 
        int hash_positive [ n + 1 ] , hash_negative [ n + 1 ] ; 
        fill_n ( hash_positive , n + 1 , 0 ) ; 
        fill_n ( hash_negative , n + 1 , 0 ) ; 
        hash_positive [ 0 ] = 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] & 1 == 1 ) difference ++ ; 
            else difference -- ; 
            if ( difference < 0 ) { 
                ans += hash_negative [ - difference ] ; 
                hash_negative [ - difference ] ++ ; 
            } 
            else { 
                ans += hash_positive [ difference ] ; 
                hash_positive [ difference ] ++ ; 
            } 
        } 
        return ans ; 
    } 
COUNT_SUBARRAYS_WITH_SAME_EVEN_AND_ODD_ELEMENTS() {}
};