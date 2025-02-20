#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class BINARY_SEARCH {
public:
    int B_S_f_gold(int arr [], int l, int r, int x)
    { 
        if ( r >= l ) { 
            int mid = l + ( r - l ) / 2 ; 
            if ( arr [ mid ] == x ) return mid ; 
            if ( arr [ mid ] > x ) return B_S_f_gold ( arr , l , mid - 1 , x ) ; 
            return B_S_f_gold ( arr , mid + 1 , r , x ) ; 
        } 
        return - 1 ; 
    } 
BINARY_SEARCH() {}
};