#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_TRIPLET_SUM_ARRAY_1 {
public:
    int M_T_S_A_1_f_gold(int arr [], int n)
    { 
        sort ( arr , arr + n ) ; 
        return arr [ n - 1 ] + arr [ n - 2 ] + arr [ n - 3 ] ; 
    } 
MAXIMUM_TRIPLET_SUM_ARRAY_1() {}
};