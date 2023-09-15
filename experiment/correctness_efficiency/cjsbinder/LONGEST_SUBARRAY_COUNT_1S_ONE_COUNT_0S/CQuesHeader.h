#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_SUBARRAY_COUNT_1S_ONE_COUNT_0S {
public:
    int L_S_C_1_O_C_0_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > um ; 
        int sum = 0 , maxLen = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            sum += arr [ i ] == 0 ? - 1 : 1 ; 
            if ( sum == 1 ) maxLen = i + 1 ; 
            else if ( um . find ( sum ) == um . end ( ) ) um [ sum ] = i ; 
            if ( um . find ( sum - 1 ) != um . end ( ) ) { 
                if ( maxLen < ( i - um [ sum - 1 ] ) ) maxLen = i - um [ sum - 1 ] ; 
            } 
        } 
        return maxLen ; 
    } 
LONGEST_SUBARRAY_COUNT_1S_ONE_COUNT_0S() {}
};