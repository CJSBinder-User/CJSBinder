#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_NUMBER_PLATFORMS_REQUIRED_RAILWAYBUS_STATION {
public:
    int M_N_P_R_R_S_f_gold(int arr [], int dep [], int n)
    { 
        sort ( arr , arr + n ) ; 
        sort ( dep , dep + n ) ; 
        int plat_needed = 1 , result = 1 ; 
        int i = 1 , j = 0 ; 
        while ( i < n && j < n ) { 
            if ( arr [ i ] <= dep [ j ] ) { 
                plat_needed ++ ; 
                i ++ ; 
                if ( plat_needed > result ) result = plat_needed ; 
            } 
            else { 
                plat_needed -- ; 
                j ++ ; 
            } 
        } 
        return result ; 
    } 
MINIMUM_NUMBER_PLATFORMS_REQUIRED_RAILWAYBUS_STATION() {}
};