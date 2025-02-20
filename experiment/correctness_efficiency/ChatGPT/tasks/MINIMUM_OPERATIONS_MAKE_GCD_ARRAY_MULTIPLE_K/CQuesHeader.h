#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_OPERATIONS_MAKE_GCD_ARRAY_MULTIPLE_K {
public:
    int M_O_M_G_A_M_K_f_gold(int a [], int n, int k)
    { 
        int result = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        ++ i ) { 
            if ( a [ i ] != 1 && a [ i ] > k ) { 
                result = result + min ( a [ i ] % k , k - a [ i ] % k ) ; 
            } 
            else { 
                result = result + k - a [ i ] ; 
            } 
        } 
        return result ; 
    } 
MINIMUM_OPERATIONS_MAKE_GCD_ARRAY_MULTIPLE_K() {}
};