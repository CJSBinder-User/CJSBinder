#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_TIME_WRITE_CHARACTERS_USING_INSERT_DELETE_COPY_OPERATION {
public:
    int M_T_W_C_U_I_D_C_O_f_gold(int N, int insert, int remove, int copy)
    { 
        if ( N == 0 ) return 0 ; 
        if ( N == 1 ) return insert ; 
        int dp [ N + 1 ] ; 
        memset ( dp , 0 , sizeof ( dp ) ) ; 
        for ( int i = 1 ; 
        i <= N ; 
        i ++ ) { 
            if ( i % 2 == 0 ) dp [ i ] = min ( dp [ i - 1 ] + insert , dp [ i / 2 ] + copy ) ; 
            else dp [ i ] = min ( dp [ i - 1 ] + insert , dp [ ( i + 1 ) / 2 ] + copy + remove ) ; 
        } 
        return dp [ N ] ; 
    } 
MINIMUM_TIME_WRITE_CHARACTERS_USING_INSERT_DELETE_COPY_OPERATION() {}
};