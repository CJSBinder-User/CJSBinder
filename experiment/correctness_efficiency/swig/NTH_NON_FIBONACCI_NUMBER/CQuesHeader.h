#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NTH_NON_FIBONACCI_NUMBER {
public:
    int N_N_F_N_f_gold(int n)
    { 
        int prevPrev = 1 , prev = 2 , curr = 3 ; 
        while ( n > 0 ) { 
            prevPrev = prev ; 
            prev = curr ; 
            curr = prevPrev + prev ; 
            n = n - ( curr - prev - 1 ) ; 
        } 
        n = n + ( curr - prev - 1 ) ; 
        return prev + n ; 
    } 
NTH_NON_FIBONACCI_NUMBER() {}
};