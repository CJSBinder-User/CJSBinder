#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SQUARE_ROOT_OF_AN_INTEGER_1 {
public:
    int S_R_O_A_I_1_f_gold(int x)
    { 
        if ( x == 0 || x == 1 ) return x ; 
        int start = 1 , end = x , ans ; 
        while ( start <= end ) { 
            int mid = ( start + end ) / 2 ; 
            if ( mid * mid == x ) return mid ; 
            if ( mid * mid < x ) { 
                start = mid + 1 ; 
                ans = mid ; 
            } 
            else end = mid - 1 ; 
        } 
        return ans ; 
    } 
SQUARE_ROOT_OF_AN_INTEGER_1() {}
};