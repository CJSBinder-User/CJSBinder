#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DOUBLE_FACTORIAL {
public:
    unsigned int D_F_f_gold(unsigned int n)
    { 
        if ( n == 0 || n == 1 ) return 1 ; 
        return n * D_F_f_gold ( n - 2 ) ; 
    } 
DOUBLE_FACTORIAL() {}
};