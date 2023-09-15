#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_ORDERED_PAIRS_AI_AJ_0 {
public:
    int N_O_P_A_A_0_f_gold(int a [], int n)
    { 
        int count = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            for ( int j = i + 1 ; 
            j < n ; 
            j ++ ) if ( ( a [ i ] & a [ j ] ) == 0 ) count += 2 ; 
        } 
        return count ; 
    } 
NUMBER_ORDERED_PAIRS_AI_AJ_0() {}
};