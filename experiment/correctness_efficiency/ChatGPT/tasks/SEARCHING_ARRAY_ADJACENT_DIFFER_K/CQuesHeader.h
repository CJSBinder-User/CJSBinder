#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEARCHING_ARRAY_ADJACENT_DIFFER_K {
public:
    int S_A_A_D_K_f_gold(int arr [], int n, int x, int k)
    { 
        int i = 0 ; 
        while ( i < n ) { 
            if ( arr [ i ] == x ) return i ; 
            i = i + max ( 1 , abs ( arr [ i ] - x ) / k ) ; 
        } 
        cout << "number is not present!" ; 
        return - 1 ; 
    } 
SEARCHING_ARRAY_ADJACENT_DIFFER_K() {}
};