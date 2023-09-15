#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEARCH_AN_ELEMENT_IN_AN_ARRAY_WHERE_DIFFERENCE_BETWEEN_ADJACENT_ELEMENTS_IS_1 {
public:
    int S_A_E_I_A_A_W_D_B_A_E_I_1_f_gold(int arr [], int n, int x)
    { 
        int i = 0 ; 
        while ( i < n ) { 
            if ( arr [ i ] == x ) return i ; 
            i = i + abs ( arr [ i ] - x ) ; 
        } 
        cout << "number is not present!" ; 
        return - 1 ; 
    } 
SEARCH_AN_ELEMENT_IN_AN_ARRAY_WHERE_DIFFERENCE_BETWEEN_ADJACENT_ELEMENTS_IS_1() {}
};