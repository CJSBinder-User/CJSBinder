#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SMALLEST_SUBSET_SUM_GREATER_ELEMENTS {
public:
    int S_S_S_G_E_f_gold(int arr [], int n)
    { 
        int halfSum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) halfSum = halfSum + arr [ i ] ; 
        halfSum = halfSum / 2 ; 
        sort ( arr , arr + n , greater < int > ( ) ) ; 
        int res = 0 , curr_sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            curr_sum += arr [ i ] ; 
            res ++ ; 
            if ( curr_sum > halfSum ) return res ; 
        } 
        return res ; 
    } 
SMALLEST_SUBSET_SUM_GREATER_ELEMENTS() {}
};