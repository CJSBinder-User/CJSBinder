#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class TAIL_RECURSION {
public:
    unsigned int T_R_f_gold(unsigned int n)
    { 
        if ( n == 0 ) return 1 ; 
        return n * T_R_f_gold ( n - 1 ) ; 
    } 
TAIL_RECURSION() {}
};