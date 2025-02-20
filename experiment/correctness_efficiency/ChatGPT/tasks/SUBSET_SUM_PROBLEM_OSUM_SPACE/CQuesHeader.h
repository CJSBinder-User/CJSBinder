#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUBSET_SUM_PROBLEM_OSUM_SPACE {
public:
    bool S_S_P_O_S_f_gold(int arr [], int n, int sum)
    { 
        bool subset [ 2 ] [ sum + 1 ] ; 
        for ( int i = 0 ; 
        i <= n ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j <= sum ; 
            j ++ ) { 
                if ( j == 0 ) subset [ i % 2 ] [ j ] = true ; 
                else if ( i == 0 ) subset [ i % 2 ] [ j ] = false ; 
                else if ( arr [ i - 1 ] <= j ) subset [ i % 2 ] [ j ] = subset [ ( i + 1 ) % 2 ] [ j - arr [ i - 1 ] ] || subset [ ( i + 1 ) % 2 ] [ j ] ; 
                else subset [ i % 2 ] [ j ] = subset [ ( i + 1 ) % 2 ] [ j ] ; 
            } 
        } 
        return subset [ n % 2 ] [ sum ] ; 
    } 
SUBSET_SUM_PROBLEM_OSUM_SPACE() {}
};