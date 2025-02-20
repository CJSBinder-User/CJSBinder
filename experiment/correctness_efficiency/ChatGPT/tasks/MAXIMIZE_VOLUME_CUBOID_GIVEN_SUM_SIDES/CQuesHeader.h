#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMIZE_VOLUME_CUBOID_GIVEN_SUM_SIDES {
public:
    int M_V_C_G_S_S_f_gold(int s)
    { 
        int maxvalue = 0 ; 
        for ( int i = 1 ; 
        i <= s - 2 ; 
        i ++ ) { 
            for ( int j = 1 ; 
            j <= s - 1 ; 
            j ++ ) { 
                int k = s - i - j ; 
                maxvalue = max ( maxvalue , i * j * k ) ; 
            } 
        } 
        return maxvalue ; 
    } 
MAXIMIZE_VOLUME_CUBOID_GIVEN_SUM_SIDES() {}
};