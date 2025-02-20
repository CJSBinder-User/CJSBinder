#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_SUM_ABSOLUTE_DIFFERENCE_ARRAY {
public:
    int M_S_A_D_A_f_gold(int a [], int n)
    { 
        vector < int > finalSequence ; 
        sort ( a , a + n ) ; 
        for ( int i = 0 ; 
        i < n / 2 ; 
        ++ i ) { 
            finalSequence . push_back ( a [ i ] ) ; 
            finalSequence . push_back ( a [ n - i - 1 ] ) ; 
        } 
        int MaximumSum = 0 ; 
        for ( int i = 0 ; 
        i < n - 1 ; 
        ++ i ) { 
            MaximumSum = MaximumSum + abs ( finalSequence [ i ] - finalSequence [ i + 1 ] ) ; 
        } 
        MaximumSum = MaximumSum + abs ( finalSequence [ n - 1 ] - finalSequence [ 0 ] ) ; 
        return MaximumSum ; 
    } 
MAXIMUM_SUM_ABSOLUTE_DIFFERENCE_ARRAY() {}
};