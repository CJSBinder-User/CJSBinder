#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_NUMBER_PAIRS_ARRAY_XOR_0 {
public:
    int F_N_P_A_X_0_f_gold(int a [], int n)
    { 
        sort ( a , a + n ) ; 
        int count = 1 ; 
        int answer = 0 ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            if ( a [ i ] == a [ i - 1 ] ) { 
                count += 1 ; 
            } 
            else { 
                answer = answer + ( count * ( count - 1 ) ) / 2 ; 
                count = 1 ; 
            } 
        } 
        answer = answer + ( count * ( count - 1 ) ) / 2 ; 
        return answer ; 
    } 
FIND_NUMBER_PAIRS_ARRAY_XOR_0() {}
};