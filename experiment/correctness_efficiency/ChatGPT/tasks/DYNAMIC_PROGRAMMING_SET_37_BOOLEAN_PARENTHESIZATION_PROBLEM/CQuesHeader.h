#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYNAMIC_PROGRAMMING_SET_37_BOOLEAN_PARENTHESIZATION_PROBLEM {
public:
    int D_P_S_3_B_P_P_f_gold(char symb [], char oper [], int n)
    { 
        int F [ n ] [ n ] , T [ n ] [ n ] ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            F [ i ] [ i ] = ( symb [ i ] == 'F' ) ? 1 : 0 ; 
            T [ i ] [ i ] = ( symb [ i ] == 'T' ) ? 1 : 0 ; 
        } 
        for ( int gap = 1 ; 
        gap < n ; 
        ++ gap ) { 
            for ( int i = 0 , j = gap ; 
            j < n ; 
            ++ i , ++ j ) { 
                T [ i ] [ j ] = F [ i ] [ j ] = 0 ; 
                for ( int g = 0 ; 
                g < gap ; 
                g ++ ) { 
                    int k = i + g ; 
                    int tik = T [ i ] [ k ] + F [ i ] [ k ] ; 
                    int tkj = T [ k + 1 ] [ j ] + F [ k + 1 ] [ j ] ; 
                    if ( oper [ k ] == '&' ) { 
                        T [ i ] [ j ] += T [ i ] [ k ] * T [ k + 1 ] [ j ] ; 
                        F [ i ] [ j ] += ( tik * tkj - T [ i ] [ k ] * T [ k + 1 ] [ j ] ) ; 
                    } 
                    if ( oper [ k ] == '|' ) { 
                        F [ i ] [ j ] += F [ i ] [ k ] * F [ k + 1 ] [ j ] ; 
                        T [ i ] [ j ] += ( tik * tkj - F [ i ] [ k ] * F [ k + 1 ] [ j ] ) ; 
                    } 
                    if ( oper [ k ] == '^' ) { 
                        T [ i ] [ j ] += F [ i ] [ k ] * T [ k + 1 ] [ j ] + T [ i ] [ k ] * F [ k + 1 ] [ j ] ; 
                        F [ i ] [ j ] += T [ i ] [ k ] * T [ k + 1 ] [ j ] + F [ i ] [ k ] * F [ k + 1 ] [ j ] ; 
                    } 
                } 
            } 
        } 
        return T [ 0 ] [ n - 1 ] ; 
    } 
DYNAMIC_PROGRAMMING_SET_37_BOOLEAN_PARENTHESIZATION_PROBLEM() {}
};