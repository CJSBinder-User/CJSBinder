#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PAINTING_FENCE_ALGORITHM {
public:
    long P_F_A_f_gold(int n, int k)
    { 
        long total = k ; 
        int mod = 1000000007 ; 
        int same = 0 , diff = k ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) { 
            same = diff ; 
            diff = total * ( k - 1 ) ; 
            diff = diff % mod ; 
            total = ( same + diff ) % mod ; 
        } 
        return total ; 
    } 
PAINTING_FENCE_ALGORITHM() {}
};