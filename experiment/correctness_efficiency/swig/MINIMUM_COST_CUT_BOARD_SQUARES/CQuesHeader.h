#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_COST_CUT_BOARD_SQUARES {
public:
    int M_C_C_B_S_f_gold(int X [], int Y [], int m, int n)
    { 
        int res = 0 ; 
        sort ( X , X + m , greater < int > ( ) ) ; 
        sort ( Y , Y + n , greater < int > ( ) ) ; 
        int hzntl = 1 , vert = 1 ; 
        int i = 0 , j = 0 ; 
        while ( i < m && j < n ) { 
            if ( X [ i ] > Y [ j ] ) { 
                res += X [ i ] * vert ; 
                hzntl ++ ; 
                i ++ ; 
            } 
            else { 
                res += Y [ j ] * hzntl ; 
                vert ++ ; 
                j ++ ; 
            } 
        } 
        int total = 0 ; 
        while ( i < m ) total += X [ i ++ ] ; 
        res += total * vert ; 
        total = 0 ; 
        while ( j < n ) total += Y [ j ++ ] ; 
        res += total * hzntl ; 
        return res ; 
    } 
MINIMUM_COST_CUT_BOARD_SQUARES() {}
};