#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LONGEST_PALINDROME_SUBSEQUENCE_SPACE {
public:
    int L_P_S_S_f_gold(string & s)
    { 
        int n = s . length ( ) ; 
        int a [ n ] ; 
        for ( int i = n - 1 ; 
        i >= 0 ; 
        i -- ) { 
            int back_up = 0 ; 
            for ( int j = i ; 
            j < n ; 
            j ++ ) { 
                if ( j == i ) a [ j ] = 1 ; 
                else if ( s [ i ] == s [ j ] ) { 
                    int temp = a [ j ] ; 
                    a [ j ] = back_up + 2 ; 
                    back_up = temp ; 
                } 
                else { 
                    back_up = a [ j ] ; 
                    a [ j ] = max ( a [ j - 1 ] , a [ j ] ) ; 
                } 
            } 
        } 
        return a [ n - 1 ] ; 
    } 
LONGEST_PALINDROME_SUBSEQUENCE_SPACE() {}
};