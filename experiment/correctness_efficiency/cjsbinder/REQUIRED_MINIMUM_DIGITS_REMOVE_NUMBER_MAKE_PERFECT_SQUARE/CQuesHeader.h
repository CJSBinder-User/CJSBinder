#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class REQUIRED_MINIMUM_DIGITS_REMOVE_NUMBER_MAKE_PERFECT_SQUARE {
public:
    int R_M_D_R_N_M_P_S_f_gold(string s)
    { 
        int n = s . size ( ) ; 
        int ans = - 1 ; 
        string num ; 
        for ( int i = 1 ; 
        i < ( 1 << n ) ; 
        i ++ ) { 
            string str = "" ; 
            for ( int j = 0 ; 
            j < n ; 
            j ++ ) { 
                if ( ( i >> j ) & 1 ) { 
                    str += s [ j ] ; 
                } 
            } 
            if ( str [ 0 ] != '0' ) { 
                int temp = 0 ; 
                for ( int j = 0 ; 
                j < str . size ( ) ; 
                j ++ ) temp = temp * 10 + ( int ) ( str [ j ] - '0' ) ; 
                int k = sqrt ( temp ) ; 
                if ( k * k == temp ) { 
                    if ( ans < ( int ) str . size ( ) ) { 
                        ans = ( int ) str . size ( ) ; 
                        num = str ; 
                    } 
                } 
            } 
        } 
        if ( ans == - 1 ) return ans ; 
        else { 
            cout << num << " " ; 
            return n - ans ; 
        } 
    } 
REQUIRED_MINIMUM_DIGITS_REMOVE_NUMBER_MAKE_PERFECT_SQUARE() {}
};