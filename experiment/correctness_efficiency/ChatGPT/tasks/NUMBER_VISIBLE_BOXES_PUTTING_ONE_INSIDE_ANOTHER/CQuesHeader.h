#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class NUMBER_VISIBLE_BOXES_PUTTING_ONE_INSIDE_ANOTHER {
public:
    int N_V_B_P_O_I_A_f_gold(int arr [], int n)
    { 
        queue < int > q ; 
        sort ( arr , arr + n ) ; 
        q . push ( arr [ 0 ] ) ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) { 
            int now = q . front ( ) ; 
            if ( arr [ i ] >= 2 * now ) q . pop ( ) ; 
            q . push ( arr [ i ] ) ; 
        } 
        return q . size ( ) ; 
    } 
NUMBER_VISIBLE_BOXES_PUTTING_ONE_INSIDE_ANOTHER() {}
};