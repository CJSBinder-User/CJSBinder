#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_FIRST_MISSING_NUMBER {
public:
    int F_T_F_M_N_f_gold(int array [], int start, int end)
    { 
        if ( start > end ) return end + 1 ; 
        if ( start != array [ start ] ) return start ; 
        int mid = ( start + end ) / 2 ; 
        if ( array [ mid ] == mid ) return F_T_F_M_N_f_gold ( array , mid + 1 , end ) ; 
        return F_T_F_M_N_f_gold ( array , start , mid ) ; 
    } 
FIND_THE_FIRST_MISSING_NUMBER() {}
};