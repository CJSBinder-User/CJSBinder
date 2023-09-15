#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FRIENDS_PAIRING_PROBLEM_2 {
public:
    int F_P_P_2_f_gold(int n)
    { 
        int a = 1 , b = 2 , c = 0 ; 
        if ( n <= 2 ) { 
            return n ; 
        } 
        for ( int i = 3 ; 
        i <= n ; 
        i ++ ) { 
            c = b + ( i - 1 ) * a ; 
            a = b ; 
            b = c ; 
        } 
        return c ; 
    } 
FRIENDS_PAIRING_PROBLEM_2() {}
};