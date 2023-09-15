#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class K_TH_DIGIT_RAISED_POWER_B {
public:
    int K_T_D_R_P_B_f_gold(int a, int b, int k)
    { 
        int p = pow ( a , b ) ; 
        int count = 0 ; 
        while ( p > 0 && count < k ) { 
            int rem = p % 10 ; 
            count ++ ; 
            if ( count == k ) return rem ; 
            p = p / 10 ; 
        } 
        return 0 ; 
    } 
K_TH_DIGIT_RAISED_POWER_B() {}
};