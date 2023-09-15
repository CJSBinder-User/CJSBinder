#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_POSSIBLE_DIFFERENCE_TWO_SUBSETS_ARRAY {
public:
    int M_P_D_T_S_A_f_gold(int arr [], int n)
    { 
        int SubsetSum_1 = 0 , SubsetSum_2 = 0 ; 
        for ( int i = 0 ; 
        i <= n - 1 ; 
        i ++ ) { 
            bool isSingleOccurance = true ; 
            for ( int j = i + 1 ; 
            j <= n - 1 ; 
            j ++ ) { 
                if ( arr [ i ] == arr [ j ] ) { 
                    isSingleOccurance = false ; 
                    arr [ i ] = arr [ j ] = 0 ; 
                    break ; 
                } 
            } 
            if ( isSingleOccurance ) { 
                if ( arr [ i ] > 0 ) SubsetSum_1 += arr [ i ] ; 
                else SubsetSum_2 += arr [ i ] ; 
            } 
        } 
        return abs ( SubsetSum_1 - SubsetSum_2 ) ; 
    } 
MAXIMUM_POSSIBLE_DIFFERENCE_TWO_SUBSETS_ARRAY() {}
};