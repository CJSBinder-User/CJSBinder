#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_BINARY_DIGIT_NUMBERS_SMALLER_N {
public:
    int C_B_D_N_S_N_f_gold(int N)
    { 
        queue < int > q ; 
        q . push ( 1 ) ; 
        int cnt = 0 ; 
        int t ; 
        while ( ! q . empty ( ) ) { 
            t = q . front ( ) ; 
            q . pop ( ) ; 
            if ( t <= N ) { 
                cnt ++ ; 
                q . push ( t * 10 ) ; 
                q . push ( t * 10 + 1 ) ; 
            } 
        } 
        return cnt ; 
    } 
COUNT_BINARY_DIGIT_NUMBERS_SMALLER_N() {}
};