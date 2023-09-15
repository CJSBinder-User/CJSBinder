#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class EQUILIBRIUM_INDEX_OF_AN_ARRAY_1 {
public:
    int E_I_O_A_A_1_f_gold(int arr [], int n)
    { 
        int sum = 0 ; 
        int leftsum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        ++ i ) sum += arr [ i ] ; 
        for ( int i = 0 ; 
        i < n ; 
        ++ i ) { 
            sum -= arr [ i ] ; 
            if ( leftsum == sum ) return i ; 
            leftsum += arr [ i ] ; 
        } 
        return - 1 ; 
    } 
EQUILIBRIUM_INDEX_OF_AN_ARRAY_1() {}
};