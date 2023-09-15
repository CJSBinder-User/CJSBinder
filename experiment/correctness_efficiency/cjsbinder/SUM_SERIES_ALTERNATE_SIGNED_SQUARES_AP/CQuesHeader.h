#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_SERIES_ALTERNATE_SIGNED_SQUARES_AP {
public:
    int S_S_A_S_S_A_f_gold(int n, int a [])
    { 
        int res = 0 ; 
        for ( int i = 0 ; 
        i < 2 * n ; 
        i ++ ) { 
            if ( i % 2 == 0 ) res += a [ i ] * a [ i ] ; 
            else res -= a [ i ] * a [ i ] ; 
        } 
        return res ; 
    } 
SUM_SERIES_ALTERNATE_SIGNED_SQUARES_AP() {}
};