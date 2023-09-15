#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DIVISIBILITY_BY_7 {
public:
    int D_B_7_f_gold(int num)
    { 
        if ( num < 0 ) return D_B_7_f_gold ( - num ) ; 
        if ( num == 0 || num == 7 ) return 1 ; 
        if ( num < 10 ) return 0 ; 
        return D_B_7_f_gold ( num / 10 - 2 * ( num - num / 10 * 10 ) ) ; 
    } 
DIVISIBILITY_BY_7() {}
};