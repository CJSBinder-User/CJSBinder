#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_AREA_RECTANGLES_POSSIBLE_ARRAY {
public:
    int S_A_R_P_A_f_gold(int a [], int n)
    { 
        sort ( a , a + n , greater < int > ( ) ) ; 
        int sum = 0 ; 
        bool flag = false ; 
        int len ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( ( a [ i ] == a [ i + 1 ] || a [ i ] - a [ i + 1 ] == 1 ) && ( ! flag ) ) { 
                flag = true ; 
                len = a [ i + 1 ] ; 
                i ++ ; 
            } 
            else if ( ( a [ i ] == a [ i + 1 ] || a [ i ] - a [ i + 1 ] == 1 ) && ( flag ) ) { 
                sum = sum + a [ i + 1 ] * len ; 
                flag = false ; 
                i ++ ; 
            } 
        } 
        return sum ; 
    } 
SUM_AREA_RECTANGLES_POSSIBLE_ARRAY() {}
};