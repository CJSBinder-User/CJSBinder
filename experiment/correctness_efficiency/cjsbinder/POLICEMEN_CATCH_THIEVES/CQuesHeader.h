#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class POLICEMEN_CATCH_THIEVES {
public:
    int P_C_T_f_gold(char arr [], int n, int k)
    { 
        int res = 0 ; 
        vector < int > thi ; 
        vector < int > pol ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( arr [ i ] == 'P' ) pol . push_back ( i ) ; 
            else if ( arr [ i ] == 'T' ) thi . push_back ( i ) ; 
        } 
        int l = 0 , r = 0 ; 
        while ( l < thi . size ( ) && r < pol . size ( ) ) { 
            if ( abs ( thi [ l ] - pol [ r ] ) <= k ) { 
                res ++ ; 
                l ++ ; 
                r ++ ; 
            } 
            else if ( thi [ l ] < pol [ r ] ) l ++ ; 
            else r ++ ; 
        } 
        return res ; 
    } 
POLICEMEN_CATCH_THIEVES() {}
};