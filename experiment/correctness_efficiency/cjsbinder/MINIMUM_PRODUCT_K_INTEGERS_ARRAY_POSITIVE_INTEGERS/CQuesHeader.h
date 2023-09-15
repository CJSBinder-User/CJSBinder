#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_PRODUCT_K_INTEGERS_ARRAY_POSITIVE_INTEGERS {
public:
    int M_P_K_I_A_P_I_f_gold(int arr [], int n, int k)
    { 
        priority_queue < int , vector < int > , greater < int > > pq ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) pq . push ( arr [ i ] ) ; 
        int count = 0 , ans = 1 ; 
        while ( pq . empty ( ) == false && count < k ) { 
            ans = ans * pq . top ( ) ; 
            pq . pop ( ) ; 
            count ++ ; 
        } 
        return ans ; 
    } 
MINIMUM_PRODUCT_K_INTEGERS_ARRAY_POSITIVE_INTEGERS() {}
};