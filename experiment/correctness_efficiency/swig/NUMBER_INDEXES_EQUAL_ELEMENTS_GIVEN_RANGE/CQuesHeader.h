#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_INDEXES_EQUAL_ELEMENTS_GIVEN_RANGE {
public:
    int N_I_E_E_G_R_f_gold(int a [], int n, int l, int r)
    { 
        int count = 0 ; 
        for ( int i = l ; 
        i < r ; 
        i ++ ) if ( a [ i ] == a [ i + 1 ] ) count += 1 ; 
        return count ; 
    } 
NUMBER_INDEXES_EQUAL_ELEMENTS_GIVEN_RANGE() {}
};