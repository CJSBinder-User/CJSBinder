#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_TRIANGLES_N_MOVES {
public:
    int N_T_N_M_f_gold(int n)
    { 
        int answer [ n + 1 ] = { 
            0 } 
        ; 
        answer [ 0 ] = 1 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) answer [ i ] = answer [ i - 1 ] * 3 + 2 ; 
        return answer [ n ] ; 
    } 
NUMBER_TRIANGLES_N_MOVES() {}
};