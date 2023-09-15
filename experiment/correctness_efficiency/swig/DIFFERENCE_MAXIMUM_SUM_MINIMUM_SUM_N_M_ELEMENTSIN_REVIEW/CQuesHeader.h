#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DIFFERENCE_MAXIMUM_SUM_MINIMUM_SUM_N_M_ELEMENTSIN_REVIEW {
public:
    int D_M_S_M_S_N_M_E_R_f_gold(int arr [], int n, int m)
    { 
        int max = 0 , min = 0 ; 
        sort ( arr , arr + n ) ; 
        for ( int i = 0 , j = n - 1 ; 
        i < m && j >= 0 ; 
        i ++ , j -- ) { 
            min += arr [ i ] ; 
            max += arr [ j ] ; 
        } 
        return ( max - min ) ; 
    } 
DIFFERENCE_MAXIMUM_SUM_MINIMUM_SUM_N_M_ELEMENTSIN_REVIEW() {}
};