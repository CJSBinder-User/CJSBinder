#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class TAIL_RECURSION_FIBONACCI {
public:
    int T_R_F_f_gold(int n, int a, int b)
    { 
        if ( n == 0 ) return a ; 
        if ( n == 1 ) return b ; 
        return T_R_F_f_gold ( n - 1 , b , a + b ) ; 
    } 
TAIL_RECURSION_FIBONACCI() {}
};