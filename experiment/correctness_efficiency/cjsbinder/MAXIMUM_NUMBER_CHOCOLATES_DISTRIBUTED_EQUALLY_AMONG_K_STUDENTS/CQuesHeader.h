#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_NUMBER_CHOCOLATES_DISTRIBUTED_EQUALLY_AMONG_K_STUDENTS {
public:
    int M_N_C_D_E_A_K_S_f_gold(int arr [], int n, int k)
    { 
        unordered_map < int , int > um ; 
        int sum [ n ] , curr_rem ; 
        int maxSum = 0 ; 
        sum [ 0 ] = arr [ 0 ] ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) sum [ i ] = sum [ i - 1 ] + arr [ i ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            curr_rem = sum [ i ] % k ; 
            if ( curr_rem == 0 ) { 
                if ( maxSum < sum [ i ] ) maxSum = sum [ i ] ; 
            } 
            else if ( um . find ( curr_rem ) == um . end ( ) ) um [ curr_rem ] = i ; 
            else if ( maxSum < ( sum [ i ] - sum [ um [ curr_rem ] ] ) ) maxSum = sum [ i ] - sum [ um [ curr_rem ] ] ; 
        } 
        return ( maxSum / k ) ; 
    } 
MAXIMUM_NUMBER_CHOCOLATES_DISTRIBUTED_EQUALLY_AMONG_K_STUDENTS() {}
};