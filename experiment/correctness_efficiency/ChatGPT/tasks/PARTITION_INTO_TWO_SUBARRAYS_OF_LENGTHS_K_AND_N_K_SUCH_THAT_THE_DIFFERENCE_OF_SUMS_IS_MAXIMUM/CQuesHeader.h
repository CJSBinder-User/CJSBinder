#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM {
public:
    int P_I_T_S_O_L_K_A_N_K_S_T_T_D_O_S_I_M_f_gold(int arr [], int N, int k)
    { 
        int M , S = 0 , S1 = 0 , max_difference = 0 ; 
        for ( int i = 0 ; 
        i < N ; 
        i ++ ) S += arr [ i ] ; 
        sort ( arr , arr + N , greater < int > ( ) ) ; 
        M = max ( k , N - k ) ; 
        for ( int i = 0 ; 
        i < M ; 
        i ++ ) S1 += arr [ i ] ; 
        max_difference = S1 - ( S - S1 ) ; 
        return max_difference ; 
    } 
PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM() {}
};