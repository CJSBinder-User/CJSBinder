#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NEXT_POWER_OF_2 {
public:
    unsigned int N_P_O_2_f_gold(unsigned int n)
    { 
        unsigned count = 0 ; 
        if ( n && ! ( n & ( n - 1 ) ) ) return n ; 
        while ( n != 0 ) { 
            n >>= 1 ; 
            count += 1 ; 
        } 
        return 1 << count ; 
    } 
NEXT_POWER_OF_2() {}
};