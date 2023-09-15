#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_HEIGHT_OF_TRIANGULAR_ARRANGEMENT_OF_ARRAY_VALUES {
public:
    int M_H_O_T_A_O_A_V_f_gold(int a [], int n)
    { 
        int result = 1 ; 
        for ( int i = 1 ; 
        i <= n ; 
        ++ i ) { 
            long long y = ( i * ( i + 1 ) ) / 2 ; 
            if ( y < n ) result = i ; 
            else break ; 
        } 
        return result ; 
    } 
MAXIMUM_HEIGHT_OF_TRIANGULAR_ARRANGEMENT_OF_ARRAY_VALUES() {}
};