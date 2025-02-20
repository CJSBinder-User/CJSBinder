#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAKING_ELEMENTS_OF_TWO_ARRAYS_SAME_WITH_MINIMUM_INCREMENTDECREMENT {
public:
    int M_E_O_T_A_S_W_M_I_f_gold(int a [], int b [], int n)
    { 
        sort ( a , a + n ) ; 
        sort ( b , b + n ) ; 
        int result = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        ++ i ) { 
            result = result + abs ( a [ i ] - b [ i ] ) ; 
        } 
        return result ; 
    } 
MAKING_ELEMENTS_OF_TWO_ARRAYS_SAME_WITH_MINIMUM_INCREMENTDECREMENT() {}
};