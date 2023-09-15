#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MINIMUM_SUM_CHOOSING_MINIMUM_PAIRS_ARRAY {
public:
    int M_S_C_M_P_A_f_gold(int A [], int n)
    { 
        int min_val = * min_element ( A , A + n ) ; 
        return ( min_val * ( n - 1 ) ) ; 
    } 
MINIMUM_SUM_CHOOSING_MINIMUM_PAIRS_ARRAY() {}
};