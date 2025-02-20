#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_NUMBER_OF_OCCURRENCES_OR_FREQUENCY_IN_A_SORTED_ARRAY {
public:
    int C_N_O_O_O_F_I_A_S_A_f_gold(int arr [], int n, int x)
    { 
        int res = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) if ( x == arr [ i ] ) res ++ ; 
        return res ; 
    } 
COUNT_NUMBER_OF_OCCURRENCES_OR_FREQUENCY_IN_A_SORTED_ARRAY() {}
};