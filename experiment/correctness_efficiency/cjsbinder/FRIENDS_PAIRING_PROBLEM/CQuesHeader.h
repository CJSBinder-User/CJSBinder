#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FRIENDS_PAIRING_PROBLEM {
public:
    int F_P_P_f_gold(int n)
    { 
        int dp [ n + 1 ] ; 
        for ( int i = 0 ; 
        i <= n ; 
        i ++ ) { 
            if ( i <= 2 ) dp [ i ] = i ; 
            else dp [ i ] = dp [ i - 1 ] + ( i - 1 ) * dp [ i - 2 ] ; 
        } 
        return dp [ n ] ; 
    } 
FRIENDS_PAIRING_PROBLEM() {}
};