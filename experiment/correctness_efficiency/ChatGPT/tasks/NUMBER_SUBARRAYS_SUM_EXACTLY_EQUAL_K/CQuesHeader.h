#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K {
public:
    int N_S_S_E_E_K_f_gold(int arr [], int n, int sum)
    { 
        unordered_map < int , int > prevSum ; 
        int res = 0 ; 
        int currsum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            currsum += arr [ i ] ; 
            if ( currsum == sum ) res ++ ; 
            if ( prevSum . find ( currsum - sum ) != prevSum . end ( ) ) res += ( prevSum [ currsum - sum ] ) ; 
            prevSum [ currsum ] ++ ; 
        } 
        return res ; 
    } 
NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K() {}
};