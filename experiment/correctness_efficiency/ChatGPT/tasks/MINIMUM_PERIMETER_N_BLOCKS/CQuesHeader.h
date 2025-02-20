#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_PERIMETER_N_BLOCKS {
public:
    int M_P_N_B_f_gold(int n)
    { 
        int l = sqrt ( n ) ; 
        int sq = l * l ; 
        if ( sq == n ) return l * 4 ; 
        else { 
            long long int row = n / l ; 
            long long int perimeter = 2 * ( l + row ) ; 
            if ( n % l != 0 ) perimeter += 2 ; 
            return perimeter ; 
        } 
    } 
MINIMUM_PERIMETER_N_BLOCKS() {}
};