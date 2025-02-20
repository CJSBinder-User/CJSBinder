#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_COMMON_SUBSTRING_SPACE_OPTIMIZED_DP_SOLUTION {
public:
    int L_C_S_S_O_D_S_f_gold(string X, string Y)
    { 
        int m = X . length ( ) ; 
        int n = Y . length ( ) ; 
        int result = 0 ; 
        int len [ 2 ] [ n ] ; 
        int currRow = 0 ; 
        for ( int i = 0 ; 
        i <= m ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j <= n ; 
            j ++ ) { 
                if ( i == 0 || j == 0 ) { 
                    len [ currRow ] [ j ] = 0 ; 
                } 
                else if ( X [ i - 1 ] == Y [ j - 1 ] ) { 
                    len [ currRow ] [ j ] = len [ 1 - currRow ] [ j - 1 ] + 1 ; 
                    result = max ( result , len [ currRow ] [ j ] ) ; 
                } 
                else { 
                    len [ currRow ] [ j ] = 0 ; 
                } 
            } 
            currRow = 1 - currRow ; 
        } 
        return result ; 
    } 
LONGEST_COMMON_SUBSTRING_SPACE_OPTIMIZED_DP_SOLUTION() {}
};