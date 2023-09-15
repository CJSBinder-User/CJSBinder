#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_MISSING_NUMBER_1 {
public:
    int F_T_M_N_1_f_gold(int a [], int n)
    { 
        int i , total = 1 ; 
        for ( i = 2 ; 
        i <= ( n + 1 ) ; 
        i ++ ) { 
            total += i ; 
            total -= a [ i - 2 ] ; 
        } 
        return total ; 
    } 
FIND_THE_MISSING_NUMBER_1() {}
};