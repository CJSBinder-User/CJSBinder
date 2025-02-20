#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COUNT_POSSIBLE_GROUPS_SIZE_2_3_SUM_MULTIPLE_3 {
public:
    int C_P_G_S_2_3_S_M_3_f_gold(int arr [], int n)
    { 
        int c [ 3 ] = { 
            0 } 
        , i ; 
        int res = 0 ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) c [ arr [ i ] % 3 ] ++ ; 
        res += ( ( c [ 0 ] * ( c [ 0 ] - 1 ) ) >> 1 ) ; 
        res += c [ 1 ] * c [ 2 ] ; 
        res += ( c [ 0 ] * ( c [ 0 ] - 1 ) * ( c [ 0 ] - 2 ) ) / 6 ; 
        res += ( c [ 1 ] * ( c [ 1 ] - 1 ) * ( c [ 1 ] - 2 ) ) / 6 ; 
        res += ( ( c [ 2 ] * ( c [ 2 ] - 1 ) * ( c [ 2 ] - 2 ) ) / 6 ) ; 
        res += c [ 0 ] * c [ 1 ] * c [ 2 ] ; 
        return res ; 
    } 
COUNT_POSSIBLE_GROUPS_SIZE_2_3_SUM_MULTIPLE_3() {}
};