#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEARCH_ALMOST_SORTED_ARRAY {
public:
    int S_A_S_A_f_gold(int arr [], int l, int r, int x)
    { 
        if ( r >= l ) { 
            int mid = l + ( r - l ) / 2 ; 
            if ( arr [ mid ] == x ) return mid ; 
            if ( mid > l && arr [ mid - 1 ] == x ) return ( mid - 1 ) ; 
            if ( mid < r && arr [ mid + 1 ] == x ) return ( mid + 1 ) ; 
            if ( arr [ mid ] > x ) return S_A_S_A_f_gold ( arr , l , mid - 2 , x ) ; 
            return S_A_S_A_f_gold ( arr , mid + 2 , r , x ) ; 
        } 
        return - 1 ; 
    } 
SEARCH_ALMOST_SORTED_ARRAY() {}
};