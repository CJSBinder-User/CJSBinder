#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class INTEGER_POSITIVE_VALUE_POSITIVE_NEGATIVE_VALUE_ARRAY_1 {
public:
    int I_P_V_P_N_V_A_1_f_gold(int arr [], int n)
    { 
        int neg = 0 , pos = 0 ; 
        int sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            sum += arr [ i ] ; 
            if ( arr [ i ] < 0 ) neg ++ ; 
            else pos ++ ; 
        } 
        return ( sum / abs ( neg - pos ) ) ; 
    } 
INTEGER_POSITIVE_VALUE_POSITIVE_NEGATIVE_VALUE_ARRAY_1() {}
};